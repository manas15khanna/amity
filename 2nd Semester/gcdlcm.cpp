//23 Feb
#include <iostream>
int main()
{
  int n1, n2, i;
  int gcd=1, lcm=1;
  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> n1;
  std::cin >> n2;
  for ( i = 1; i < 1000; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;          
        }
    }
  lcm = (n1 * n2) / gcd;
  std::cout << "GCD=" << gcd << std::endl;
  std::cout << "LCM=" << lcm << std::endl;
  return 0;
}
