https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#pragma once

#include "ball.h"
#include "table.h"

class AbstractStageFactory {
public:
    virtual ~AbstractStageFactory(){}
    /**
     * @brief makeBall - construct a ball based on the json provided
     * @param ballData - json that conforms to the spec
     * @return our newly created ball
     */
    virtual Ball* makeBall(const QJsonObject& ballData) = 0;
    /**
     * @brief makeTable - construct a table based on json provided
     * @param tableData - json that conforms to the spec
     * @return our newly created table
     */
    virtual Table* makeTable(const QJsonObject& tableData) = 0;
};
