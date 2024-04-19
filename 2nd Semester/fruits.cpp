//Calcualte total fruits in a basket, create classes apples and mangoes. Find total of each type. Print the total of each type and the total number of fruits in the basket using the concept of inheritance.
#include <iostream>
using namespace std;
class Apple{
  protected:
  int apples=3;
public:
int display1(){
    return apples;
  }
};
class Mango{
  protected:
  int mangoes=7;
public:
  int display2(){
    return mangoes;
  }
};
class Basket: public Apple, public Mango{
public:
  int total(){
    return display1()+display2();
  }
};
int main()
{
  Basket x;
  cout << "Total Apples in the basket = " << x.display1() << endl;
  cout << "Total Mangoes in the basket = " << x.display2() << endl;
  cout << "Total Fruits in the basket = " << x.total() << endl;
}
