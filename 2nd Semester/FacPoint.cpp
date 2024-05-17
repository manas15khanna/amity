//Find Factorial of a number using pointers
#include <iostream>
using namespace std;
int main() {
  int x, fact = 1;
  int *factPtr = &fact;
  cout << "Enter number:" << endl;
  cin >> x;
  for (int i=1; i<=x; ++i) {
    *factPtr *= i;
  }
  cout << "Factorial=" << *factPtr << endl;
  return 0;
}
