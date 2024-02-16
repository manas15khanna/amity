#include <iostream>
int main()
{
  int a, b;
  std::cout<<"Input numbers:"<<std::endl;
  std::cin >> a;
  std::cin >> b;
    if (a>b) {std::cout<<"A is largest: "<<a<<std::endl;}
    else {
      std::cout<<"B is largest: "<<b<<std::endl;
    } 
}
