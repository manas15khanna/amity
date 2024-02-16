#include <iostream>
int main()
{
  int x;
  std::cout<<"Enter the number to check:";
  std::cin >> x;
  if (x%2==0) {
    std::cout<<"The number is even" <<std::endl;
  }
  else{ 
    std::cout << "The numebr is odd" << std::endl;
}
}
