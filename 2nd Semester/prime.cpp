//Wednesday, 28 February
#include <iostream>
#include <math.h>
int main()
{
  int x;
  std::cout << "Enter Number:" << std::endl;
  std::cin >> x;
  for (int i=2; i<=sqrt(x); i++) {
    if(x%i==0)
      std::cout << "Not Prime" << std::endl;
    return 0;
  }
  std::cout << "Prime" << std::endl;
}
