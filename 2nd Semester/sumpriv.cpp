//Write a program to find out sum of two private data members of two classes (abc, xyz) using a common friend function.
//Assume that the prototype for both the classes will be int add(abc, xyz) 
#include <iostream>
using namespace std;
class abc;
class xyz;
class abc
{
int num1;
public:
  friend int add(abc, xyz);
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
