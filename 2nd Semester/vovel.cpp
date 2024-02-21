//21 Feb
#include <iostream>
int main()
{
  char x;
  std::cout << "Enter characther to check" << std::endl;
  std::cin >> x;
  switch (x) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      std::cout << "The character is a vovel" << std::endl;
      break;
    default: std::cout << "The character is a consonant" << std::endl;
     break;
  }
}
