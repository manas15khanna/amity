//Write a c++ programs to define two overloaded versions of functions calculating volume of sphere and cuboid.
#include <iostream>
using namespace std;
float volume(float radius) {
  return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
float volume(float length, float width, float height) {
  return length * width * height;
}
int main() {
  float sphere_radius, cuboid_length, cuboid_width, cuboid_height;
  cout << "Enter the sphere radius: ";
  cin >> sphere_radius;
  float sphere_volume = volume(sphere_radius);
  cout << "Volume of sphere: " << sphere_volume << endl;
  cout << "Enter the length, width, and height of the cuboid (separated by spaces): ";
  cin >> cuboid_length >> cuboid_width >> cuboid_height;
  float cuboid_volume = volume(cuboid_length, cuboid_width, cuboid_height);
  cout << "Volume of cuboid: " << cuboid_volume << endl;
  return 0;
}
