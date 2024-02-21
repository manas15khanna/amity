//21 Feb
#include <iostream>
int main()
{
  int x;
  std::cout << "Enter the year to check: " << std::endl;
  std::cin >> x;
  if (x%1000==0) {
    std::cout << "Leap Year" << std::endl;
  }
  else if (x%100==0) {
    std::cout << "Not a leap year" << std::endl;
  }
  else if (x%4==0) {
    std::cout << "Leap Year" << std::endl;
  }
  else {
    std::cout << "Not a leap year" << std::endl;
  }
  return 0;
}
