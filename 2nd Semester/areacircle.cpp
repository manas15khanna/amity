#include <iostream>
int main()
{
  int r;
  std::cout << "Enter radius of circle:" << std::endl;
  std::cin >> r;
  float area=3.14*r*r;
  float cir=2*3.14*r;
  std::cout << "Area of circle = " << area << " sq. units" << std::endl;
  std::cout << "Circumference of circle = " << cir << " units" << std::endl;
}
