https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef CHANGEINPOOLGAME_H
#define CHANGEINPOOLGAME_H
#include <vector>
class Ball;

/**
 * @brief The ChangeInPoolGame class stores a change that will be made to the balls vector, it is used by functions that
 * wish to effect the balls vector but don't have direct access to poolgame
 */
class ChangeInPoolGame
{
public:
    ChangeInPoolGame(std::vector<Ball*> ballsToRemove = std::vector<Ball*>(),std::vector<Ball*> ballsToAdd = std::vector<Ball*>())
        :m_ballsToRemove(ballsToRemove),m_ballsToAdd(ballsToAdd)
    {}
    std::vector<Ball *> m_ballsToRemove;
    std::vector<Ball *> m_ballsToAdd;
    bool empty(){
        return m_ballsToRemove.empty()&&m_ballsToAdd.empty();
    }

    ChangeInPoolGame merge(ChangeInPoolGame &other);
};

#endif // CHANGEINPOOLGAME_H
