#include <iostream>
using namespace std;
class manas{
  int balance=10;
  friend void gurmukh(manas);
};
void gurmukh(manas m)
{
  cout << "Gurmukh has: " << m.balance << endl;
}
int main()
{
  manas obj1;
  gurmukh(obj1);
}
