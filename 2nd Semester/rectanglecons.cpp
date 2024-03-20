//20 March
#include <iostream>
using namespace std;
class Rectangle {
private:
  double length;
  double width;
public:
  Rectangle(double s) {
    length=s;
    width=s;
  }
  Rectangle(){
    length=0;
    width=0;
  }
  Rectangle(double l, double w){
    length=l;
    width=w;
  }
  double calculateArea() {
    return length * width;
  }
};
int main() {
  Rectangle nopar;
  Rectangle onepar(5);
  Rectangle twopar(5, 10);
  cout << "Area of the rectangle: " << nopar.calculateArea() << " square units" << endl;
  cout << "Area of the rectangle: " << onepar.calculateArea() << " square units" << endl;
  cout << "Area of the rectangle: " << twopar.calculateArea() << " square units" << endl;
  return 0;
}

