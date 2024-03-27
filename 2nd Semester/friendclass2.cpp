#include <iostream>
using namespace std;
class A;
class B;
class A{
  int balance;
public:
  A(){
    balance = 10;
  }
  friend int C(A,B);
};
class B{
  int balance;
public:
  B(){
    balance = 20;
  }
  friend int C(A,B);
};
int C(A a,B b){
  return a.balance + b.balance;
}
int main(){
  A obj1;
  B obj2; 
  cout<< C(obj1,obj2)<<endl;
}

