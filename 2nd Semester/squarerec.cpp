//classes square and rectangle, friend display, data members width and height.
#include <iostream>
using namespace std;
class abc;
class xyz;
class abc
{
float w, h;
public:
  friend int display(abc, xyz);
  void input(){cin>>num1;}
};
class xyz
{
  int num2;
public:
  friend int add(abc, xyz);
  void input(){cin>>num2;}
};
int add(abc a, xyz b)
{
  return a.num1+b.num2; 
}
int main()
{
  abc a;
  xyz b;
  a.input();
  b.input();
  cout << add(a, b) << endl;
}
