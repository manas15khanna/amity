//Write a c++ program to swap two numbers using function template
//Use the function template for finding the minimum value in an array of numbers 
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
  int int1, int2; float float1, float2; char char1, char2;

  cout<<"Enter two integers:";
  cin>>int1>>int2;
  cout << "Before swapping : int1 = " << int1 << ", int2 = " << int2 << endl;
  swapValues(int1, int2);
  cout << "After swapping : int1 = " << int1 << ", int2 = " << int2 << endl;

  cout<<"Enter two floats:";
  cin>>float1>>float2;
  cout << "Before swapping : float1 = " << float1 << ", float2 = " << float2 << endl;
  swapValues(float1, float2);
  cout << "After swapping : float1 = " << float1 << ", float2 = " << float2 << endl;

  cout<<"Enter two characters:";
  cin>>char1>>char2;
  cout << "Before swapping : char1 = " << char1 << ", char2 = " << char2 << endl;
  swapValues(char1, char2);
  cout << "After swapping : char1 = " << char1 << ", char2 = " << char2 << endl;

  return 0;
}
