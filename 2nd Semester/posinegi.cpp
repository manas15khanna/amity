#include <iostream>
int main()
{
  int x;
  std::cout<<"Enter the number to check:" <<std::endl;
  std::cin >> x;
  if (x>0) {
    std::cout<<"The number is positive" <<std::endl; 
  }
  else if (x<0) {
    std::cout<<"The number is negative" <<std::endl;
  }
  else{
    std::cout<<"The number is neither negative nor positive" <<std::endl;
  }
}
