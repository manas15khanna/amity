#include <iostream>
#include <ostream>
#include <sys/types.h>
int main()
{
  int a, b, x;
  std::cout<<"Enter two numbers:";
  std::cin>>a;
  std::cin>>b;
  int sum=a+b;
  int sub=a-b;
  int mul=a*b;
  float div=a/b;
  int mod=a%b;
  std::cout<<"Choose from sum, sub, mul, div and mod:";
  std::cin>>x;
  switch (x) {
    case 1:std::cout<<"The sum is: "<<sum <<std::endl;
    break;
    case 2:std::cout<<"The Difference is: "<<sub <<std::endl;
    break;
    case 3:std::cout<<"The Multiplication is: "<<mul <<std::endl;
    break;
    case 4:std::cout<<"The Division is: "<<div <<std::endl;
    break;
    case 5:std::cout<<"The modulus is: "<<mod <<std::endl;
    break;
    default:std::cout<<"Invalid Input" <<std::endl;
    break;
  }
}
