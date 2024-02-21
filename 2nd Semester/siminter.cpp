#include <cmath>
#include <iostream>
int main()
{
  float p;
  float t, r;
  std::cout << "Enter the principle amount, time and rate of interest:" << std::endl;
  std::cin >> p;
  std::cin >> t;
  std::cin >> r;
  float total=p*r*t;
  float simp=total/100;
  float comp= p* pow(1+r/100, t);
  std::cout << "The total amount is " << total << std::endl;
  std::cout << "The Simple interest is " << simp << std::endl;
  std::cout << "Compound interest is "<< comp << std::endl;
  return 0;
}
