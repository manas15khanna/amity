//21 Feb
#include <iostream>
int main()
{
  float a, b;
  std::cout << "Enter sides of rectangle:" << std::endl;
  std::cin >> a;
  std::cin >> b;
  float ar=a*b;
  float pe=2*(a+b);
  std::cout << "Area = " << ar << " sq. units" << std::endl;
  std::cout << "Perimeter = " << pe << " units"<< std::endl;
}
