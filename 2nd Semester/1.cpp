#include <iostream>
using namespace std;
int main()
{
  int i, fact=1, number;
  cout<<"Enter any number: ";
  cin>>number;
  for (i=1; i<=number; i++) {
    fact=fact*i;
  }
    std::cout << "Factorial of "<<number<<" is  <<fact"<< std::endl;
  return 0;
}
