#include "rectangle.h"

Rectangle::Rectangle(double width, double heigth)
    : Shape("rectangle"), m_width(width), m_height(heigth) {}

double Rectangle::area() const { return m_width * m_height; }
