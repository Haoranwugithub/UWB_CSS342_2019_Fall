#include "rectangle.h"

void rectangle::set_values (int x, int y) {
    m_width = x;
    m_height = y;
}

rectangle::rectangle () {
    m_width = 5;
    m_height = 5;
}

bool rectangle::operator<(rectangle const &rect) {
    return area() < rect.area();
}

