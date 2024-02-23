//23 Feb
#include <iostream>
int main()
{
  int x, fact=1, i;
  std::cout << "Enter number:" << std::endl;
  std::cin >> x;
  for (i=1; i<=x; ++i) {
    fact*=i;
  }
  std::cout << "Factorial=" << fact << std::endl;
}

