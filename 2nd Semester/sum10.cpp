//23 Feb
#include <iostream>
int main()
{
  int x=0, sum=0, i=0;
  std::cout << "Enter number:" << std::endl;
  std::cin >> x;
  for (i=1; i<=x; i++) {
    sum=sum+i;
  }
  std::cout << "Sum=" << sum << std::endl;
}
