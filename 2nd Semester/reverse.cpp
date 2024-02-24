#include <iostream>
int main()
{
  int input, reverse=0;
  std::cout << "Enter the number:" << std::endl;
  std::cin >> input;
  while (input!=0) {
    reverse+=input%10;
    input/=10;
    reverse*=10;
  }
  reverse /=10;
  std::cout << "Reverse= " << reverse << std::endl;
  return 0;
}
