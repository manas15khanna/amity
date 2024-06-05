//Use the function template for finding the minimum value in an array of numbers 
#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[10]) {
    T minVal = arr[0];
    for (int i = 1; i < 10; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
  int intArray[10];
  cout<<"Enter Integer Array:";
  for(int i=0; i<10; i++){cin>>intArray[i];}
  cout << "Minimum value in intArray: " << findMin(intArray) << endl;

  double floatArray[10];
  cout<<"Enter Float Array:";
  for(int i=0; i<10; i++){cin>>floatArray[i];}
  cout << "Minimum value in floatArray: " << findMin(floatArray) << endl;

  // Test the template with an array of characters
  char charArray[10];
  cout<<"Enter Characters Array:";
  for(int i=0; i<10; i++){cin>>charArray[i];}
  cout << "Minimum value in charArray: " << findMin(charArray) << endl;

  return 0;
}
