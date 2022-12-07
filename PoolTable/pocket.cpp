https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "pocket.h"
void Pocket::draw(QPainter &p)
{
    p.setPen(Qt::black);
    p.setBrush(QBrush(Qt::black));
    p.drawEllipse(m_position.toPointF(),m_radius,m_radius);
}
