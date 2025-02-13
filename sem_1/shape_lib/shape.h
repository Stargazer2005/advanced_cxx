#pragma once

#include <string>

class Shape {
 public:
  Shape(std::string name) : m_name(std::move(name)) {}

  virtual double area() const = 0;

 protected:
  std::string m_name;
};
