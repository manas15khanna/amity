#include <iostream>
using namespace std;
class Mammals {
public:
  Mammals() {}
  void mammal() {
    cout << "I am a mammal" << endl;
  }
};
class MarineAnimals {
public:
  MarineAnimals() {}
  void marine() {
    cout << "I am a marine animal" << endl;
  }
};
class BlueWhale : public Mammals, public MarineAnimals {
public:
  BlueWhale() {}
  void both() {
    cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
  }
};
int main() {
  BlueWhale whale;
  MarineAnimals dolphin;
  Mammals elephant;
  elephant.mammal();
  dolphin.marine();
  whale.both();
  whale.mammal();
  whale.marine();
  return 0;
}
