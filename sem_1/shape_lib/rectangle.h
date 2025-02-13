#pragma once

#include "shape.h"

class Rectangle : public Shape {
 public:
  Rectangle(double width, double height);

  double area() const override;

 private:
  double m_width, m_height;
};
