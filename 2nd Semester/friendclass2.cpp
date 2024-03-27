#include <iostream>
using namespace std;
class A{
public:
  int money=10;
  friend int C(A);
};
class B{
public:
    int money=20;
    friend int C(A, B);
};
int C(A a, B b)
{
  return a.money+b.money;
}
int main()
{
  A obj1;
  B obj2;
  cout <<  C(obj1, obj2) << endl;
}
