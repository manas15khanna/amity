#include <iostream>
using namespace std;
class Car{
public:
  int maxspeed;
  string company;
void setdata(){
  std::cout << "Enter company" << endl;
  std::cin >> company;
  std::cout << "Enter top-speed" << endl;
  std::cin >> maxspeed;
}
void displaydata(){
  std::cout << "company: " << company << endl;
  std::cout << "Top Speed: " << maxspeed << endl;
}
};
int main()
{
  Car c;
  c.setdata();
  c.displaydata();
}
