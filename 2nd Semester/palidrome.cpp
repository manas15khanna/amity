//Wednesday, 28 February
#include <iostream>
#include <cstring>
int main()
{
  char x[25];
  std::cin >> x;
  for (int i = 0; i < strlen(x)/2; i++) {
    if(x[i]!=x[strlen(x)-i-1])
    {
      std::cout << "Not a Palindrome" << std::endl;
      return 0;
    }
  }
  std::cout << "Palindrome" << std::endl;
}
