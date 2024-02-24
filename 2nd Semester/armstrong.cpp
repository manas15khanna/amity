#include <iostream>
int main()
{
  int number, OGnumber, remainder, sum = 0;
  std::cout << "Enter number:" << std::endl;
  std::cin >> number;
  OGnumber=number;
  while (number!=0) {
   remainder=number%10;
    sum+=remainder*remainder*remainder;
    number /=10;
  }
  if (sum==OGnumber) {
    std::cout << "Armstrong" << std::endl;
  }
  else {
    std::cout << "Not Armstrong" << std::endl;
  }
  return 0;
}
