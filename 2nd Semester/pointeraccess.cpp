//Write a program to access members of a student class using pointers to object members.
#include <iostream>
using namespace std;
class Student {
public:
  int rollNumber;
};
int main() {
  Student student;
  int* rollNumberPtr = &student.rollNumber;
  *rollNumberPtr = 12345;
  cout << "Roll number: " << student.rollNumber << endl;
  return 0;
}
