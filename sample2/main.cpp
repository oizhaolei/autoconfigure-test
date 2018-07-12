#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace test;
using namespace std;


int main(int argc, char *argv[])
{
  Rectangle r(2,3);
  Polygon * p1 = &r;
  cout << p1->area() << "\n";
  cout << p1->size() << "\n";

  Triangle t(2,3);
  Polygon * p2 = &t;
  cout << p2->area() << "\n";
  cout << p2->size() << "\n";
  return 0;
}
