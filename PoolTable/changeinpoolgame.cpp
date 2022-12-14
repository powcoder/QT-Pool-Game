https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "changeinpoolgame.h"

#include "util.h"
/**
 * @brief ChangeInPoolGame::merge merges two changes together and returns the total change
 * @param other
 * @return
 */
ChangeInPoolGame ChangeInPoolGame::merge(ChangeInPoolGame &other)
{
    if(this->empty())
        return other;
    if(other.empty())
        return *this;
    return ChangeInPoolGame(mergeVectors(this->m_ballsToRemove,other.m_ballsToRemove),mergeVectors(this->m_ballsToAdd,other.m_ballsToAdd));
}
