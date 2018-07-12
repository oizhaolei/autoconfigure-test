#ifndef POLYGON_H
#define POLYGON_H

namespace test {
class Polygon
{
protected:
  int h, w;
public:
  Polygon(){}
  Polygon(int x, int y): w(x), h(y) {}
  virtual int area() {
    return 0;
  }
  virtual int size() {
    return 0;
  }
};
}


#endif /* POLYGON_H */
