//21 Feb
#include <iostream>
int main()
{
  int x;
  std::cout << "Enter number:" << std::endl;
  std::cin >> x;
  for (int i=0; i<=10; i++) {
    std::cout <<x << "x" << i <<"="<< x*i << std::endl;
  }
}
