#include <iostream>
using namespace std;
class student{
public:
  int age[100];
  string name[100];
  float rollno[100];
  int number;
void setdata(){
  cout << "Enter number of students:" << endl;
  cin >> number;
    for(int i=0; i<number; i++){
  cout << "Enter Name " << endl;
  cin >> name[i];
  cout << "Enter Age " << endl;
  cin >> age[i];
  cout << "Enter Roll Number " << endl;
  cin >> rollno[i];
    }
  }
void displaydata(){
    for(int i=0; i<number; i++){
    cout << endl;
    cout << "Roll Number: " << rollno[i] << endl;
    cout << "Name: " << name[i] << endl;
    cout << "Age: " << age[i] << endl;
    cout << endl;
  }
  }
};
int main()
{
  student s;
  s.setdata();
  s.displaydata();
}

