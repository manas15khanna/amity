//Create a class rectangle and square that inherit the class area to find the area of rectangle and square respectively using the concept of friend function, pointers and objects
#include <iostream>
using namespace std;
class Area{
public:
  float area;
};
class Rectangle:public Area{
  float width;
  float height;
public:
  void getdata(){
    cout << "Enter width and height of rectangle:" << endl;
    cin >> width>> height;
  }
  friend void calcarea(Rectangle *r);
};
class Square: public Area{
  float side;
public:
  void getdata(){
    cout << "Enter side of square:"<<endl;
    cin>> side;
  }
  friend void calcarea(Square *s);
};
void calcarea(Rectangle *r){
  r->area=r->height*r->width;
}
void calcarea(Square *s){
  s->area=s->side*s->side; 
}   
int main()
{
  Square s;
  Square *ptrs = &s;
  Rectangle r;
  Rectangle *ptrr = &r;
  s.getdata();
  r.getdata();
  calcarea(ptrs);
  calcarea(ptrr);
  cout << "The Area of the Square is:" << ptrs->area<<endl;
  cout << "The Area of the Rectange is:" << ptrr->area<<endl;
  return 0;
}
