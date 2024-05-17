//Write a program to find out the greatest and smallest among 3 numbers using pointers.
#include <iostream>
using namespace std;
int main() {
  int nums[3];
  int *minPtr, *maxPtr;
  cout << "Enter 3 numbers:" << endl;
  for (int i = 0; i < 3; i++) {
    cin >> nums[i];
  }
  minPtr = maxPtr = &nums[0];
  for (int i = 1; i < 3; i++) {
    if (*minPtr > nums[i]) {
      minPtr = &nums[i];
    }
    if (*maxPtr < nums[i]) {
      maxPtr = &nums[i];
    }
  }
  cout << "The maximum is: " << *maxPtr << endl;
  cout << "The minimum is: " << *minPtr << endl;
  return 0;
}
