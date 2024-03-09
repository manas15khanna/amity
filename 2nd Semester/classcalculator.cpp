#include <iostream>
using namespace std;
class oper{
public:
  int a;
  int b;
  int operand;
  int choice;
void operations(){
  std::cout << "Enter the two numbers: " << endl;
  cin >> a;
  cin >> b;
  cout << "Enter the operand out of add, sub, mul, div, mod" << endl;
  cin >> operand;
}
void output(){
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;
    int mod=a%b;
    switch (operand) {
    case 1:std::cout<<"The sum is: "<<sum <<std::endl;
    break;
    case 2:std::cout<<"The Difference is: "<<sub <<std::endl;
    break;
    case 3:std::cout<<"The Multiplication is: "<<mul <<std::endl;
    break;
    case 4:std::cout<<"The Division is: "<<div <<std::endl;
    break;
    case 5:std::cout<<"The modulus is: "<<mod <<std::endl;
    break;
    default:std::cout<<"Invalid Input" <<std::endl;
    break;
  }
  }
};
int main(){
  oper obj1, obj2;
  obj1.operations();
  obj2.operations();
  obj1.output();
  obj2.output();
}
