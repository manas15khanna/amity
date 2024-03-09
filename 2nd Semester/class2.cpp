#include <iostream>
using namespace std;
class employee{
public:
  int age;
  string name;
  float salary;
void setdata(){
  std::cout << "Enter employee name " << endl;
  std::cin >> name;
  std::cout << "Enter Age " << endl;
  std::cin >> age;
  std::cout << "Enter employee salary " << endl;
  std::cin >> salary;
}
void displaydata(){
  std::cout << "Employee Name: " << name << endl;
  std::cout << "Age: " << age << endl;
    std::cout << "Salary: " << salary << endl;
}
};
int main()
{
  employee e;
  e.setdata();
  e.displaydata();
}

