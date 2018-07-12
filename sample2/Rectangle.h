#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

namespace test {
  class Rectangle:public test::Polygon
  {
  protected:
    int h, w;
  public:
    Rectangle(){}
    Rectangle(int x, int y): w(x), h(y) {}
    int area();
    int size();
  };

}


#endif /* RECTANGLE_H */
