#include "rectangle.h"
void Rectangle::setA(double newA)
{
  a = newA;
}

void Rectangle::setB(double newB)
{
  b = newB;
}

double Rectangle::getA() const
{
  return a;
}

double Rectangle::getB() const
{
  return b;
}

double Rectangle::getArea() const
{
  return a*b;
}
