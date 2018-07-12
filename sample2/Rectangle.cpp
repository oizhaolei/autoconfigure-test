#include "Rectangle.h"

namespace test {

  int test::Rectangle::area() {
    return h*w;
  }
  int test::Rectangle::size() {
    return 2*(h+w);
  }

}
