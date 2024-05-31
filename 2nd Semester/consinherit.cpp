//C++ program to illustrate the use of constructors in single inheritance, multiple inhertance, multilevel inheritance
#include <iostream>
using namespace std;
class Liquid {
public:
  Liquid() {
    cout << "Liquid class constructor called" << endl;
  }
  void display1() {
    cout << "Liquid class" << endl;
  }
};
class Fuel {
public:
  Fuel() {
    cout << "Fuel class constructor called" << endl;
  }
  void display2() {
    cout << "Fuel class" << endl;
  }
};
class Petrol : public Liquid, public Fuel {
public:
  Petrol() {
    cout << "Petrol class constructor called" << endl;
  }
  void display3() {
    cout << "Petrol class inherits both Fuel and Liquid" << endl;
  }
};
class Coal : public Fuel {
public:
  Coal() {
    cout << "Coal class constructor called" << endl;
  }
  void display4() {
    cout << "Coal class single inherits Fuel" << endl;
  }
};

class Residue : public Coal {
public:
  Residue() {
    cout << "Residue class constructor called" << endl;
  }
  void display5() {
    cout << "Coal leaves residue after burning" << endl;
  }
};
int main() {
  cout << "Creating Liquid object" << endl;
  Liquid l;
  l.display1();
  cout << endl;

  cout << "Creating Fuel object" << endl;
  Fuel f;
  f.display2();
  cout << endl;

  cout << "Creating Petrol object" << endl;
  Petrol p;
  p.display3();
  cout << endl;

  cout << "Creating Coal object" << endl;
  Coal c;
  c.display4();
  cout << endl;

  cout << "Creating Residue object" << endl;
  Residue r;
  r.display5();
  cout << endl;
  return 0;
}
