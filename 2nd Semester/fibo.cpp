#include <iostream>
using namespace std;
int main()
{
  int a=0, b=1, x, nth, count=0;
  cout << "Enter the number of fibonacci terms: " << endl;
  cin >> x;
  if (x<=0)
    cout << "Enter positive integer" << endl;
  else if (x==1)
      cout << "The Fibonacci series is: \n" << a <<  endl;
  else
  {
    while (count<x){
      cout << a << endl;
      nth=a+b;
      a=b;
      b=nth;
      count +=1;
    }
  }
  return 0;
}
