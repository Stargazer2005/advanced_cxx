#pragma once

#include "shape.h"

class Circle : public Shape {
 public:
  explicit Circle(double radius);

  double area() const override;

 private:
  double m_radius;
};
