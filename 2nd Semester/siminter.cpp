//21 Feb
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  float p;
  float t, r;
  cout << "Enter the principle amount, time and rate of interest:" << endl;
  cin >> p;
  cin >> t;
  cin >> r;
  float simple=(p*r*t)/100;
  float comp= p*((pow((1 + r / 100), t)));
  float ci=comp-p;
  cout << "The Simple interest is " << simple << endl;
  cout << "Compound interest is "<< ci << endl;
  return 0;
}
