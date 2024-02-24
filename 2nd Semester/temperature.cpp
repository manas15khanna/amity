#include <iostream>
int main()
{
  float a;
  std::cout << "Enter temperature in Celcius: " << std::endl;
  std::cin >> a;
  float f=a*9.0/5.0+32;
  float k=a+273;
  std::cout << "Farenheit= " << f << std::endl;
  std::cout << "Kelvin= " << k << std::endl;
}
