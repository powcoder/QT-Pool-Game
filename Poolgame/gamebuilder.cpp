https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder

#include "gamebuilder.h"
#include "game.h"
#include <iostream>
#include <QJsonArray>

StageOneBuilder::~StageOneBuilder() {
    // delete state if building not collected...
    if (m_buildingTable != nullptr) delete m_buildingTable;
    if (m_buildingBalls != nullptr) {
        for (Ball* b : *m_buildingBalls) delete b;
        delete m_buildingBalls;
    }
}

void StageOneBuilder::addBall(QJsonObject &ballData) {
    // if we haven't already started building
    if (m_buildingBalls == nullptr) {
        m_buildingBalls = new std::vector<Ball*>();
    }
    m_buildingBalls->push_back(m_factory->makeBall(ballData));
}

void StageOneBuilder::addTable(QJsonObject &tableData) {
    // ensure that we haven't already created another table
    if (m_buildingTable != nullptr) throw std::invalid_argument("table created twice");
    m_buildingTable = m_factory->makeTable(tableData);
}

Game* StageOneBuilder::getResult() {
    // no-one called addBall
    if (m_buildingBalls == nullptr) {
        // soft fail
        std::cerr << "warning! pool game without balls created...\n";
        m_buildingBalls = new std::vector<Ball*>();
    }
    // likewise for table
    if (m_buildingTable == nullptr) {
        throw std::invalid_argument("builder finished with no table supplied");
    }

    Game* retGame = new Game(m_buildingBalls, m_buildingTable);
    // need to reset for when we build next
    m_buildingBalls = nullptr;
    m_buildingTable = nullptr;

    return retGame;
}

Game* GameDirector::createGame() {
    // construct our table
    QJsonObject tableData = m_conf->value("table").toObject();
    m_builder->addTable(tableData);

    // for each of our balls, construct them
    QJsonArray ballData = m_conf->value("balls").toArray();
    for (const auto& item : ballData) {
        QJsonObject t = item.toObject();
        m_builder->addBall(t);
    }

    return m_builder->getResult();
}
