#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"

namespace test {
  class Triangle:public test::Polygon
  {
  protected:
    int h, w;
  public:
    Triangle(){}
    Triangle(int x, int y): w(x), h(y) {}
    int area();
    int size();
  };

}


#endif /* TRIANGLE_H */
