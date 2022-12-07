https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "table.h"

void StageOneTable::render(QPainter &painter) {
    // our table colour
    painter.setBrush(m_brush);
    // draw table
    painter.drawRect(this->getX(), this->getY(), this->getWidth(), this->getHeight());
}
