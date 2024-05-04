//Wtite a program in c++ to create  a class named shape with a function that prints "this is a shape". Create anothercalss named polygon inheriting the shape class with the same function that prints "A Polygon is a shape". Create two classes rectangle and triange having the same function which print "rectangle is a polygon" and "triange is a polygon" respectively. Make another class named square having the same function that prints "Square is a rectangle". Now try calling the function by the object of rach of these classes.
#include <iostream>
using namespace std;
class Shape {
public:
    void Display() {
        cout << "This is a shape." << endl;
    }
};
class Polygon : public Shape {
public:
    void Display() {
        cout << "A Polygon is a shape." << endl;
    }
};
class Rectangle : public Polygon {
public:
    void Display() {
        cout << "Rectangle is a polygon." << endl;
    }
};
class Triangle : public Polygon {
public:
    void Display() {
        cout << "Triangle is a polygon." << endl;
    }
};
class Square : public Rectangle {
public:
    void Display() {
        cout << "Square is a rectangle." << endl;
    }
};
int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;
    shape.Display();
    polygon.Display();
    rectangle.Display();
    triangle.Display();
    square.Display();
    return 0;
}
