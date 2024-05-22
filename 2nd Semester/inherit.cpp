//Write a c++ program to illustrate how the following forms of inheritance are supported, single, multiple, multilevel, hybrid.
#include <iostream>
using namespace std;
class Liquid{
public:
  void display1(){
    cout << "Liquid class"<<endl;
  }
};
  class Fuel{
public:
  void display2(){
  cout << "Fuel Class"<<endl;
}
};
class Petrol:public Liquid, public Fuel{
public:
  void display3(){
  cout << "Petrol Class inherits both fuel and liquid"<<endl;
  }
};
class Coal:public Fuel{
public:
  void display4(){
    cout<<"Coal Class single inherits Fuel"<<endl;
  }
};
class Residue:public Coal{
public:
  void display5(){
    cout << "Coal leaves residue after burning"<<endl;
  }
};
int main()
{
  Liquid l;
  Fuel f;
  Petrol p;
  Coal c;
  Residue r;
  l.display1();
  f.display2();
  p.display3();
  c.display4();
  r.display5();
}
