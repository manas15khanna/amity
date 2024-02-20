#include <iostream>
class Car{
  public:
  void honk()
  {
    std::cout << "Honk!!\n";
  }
};
int main()
{
  Car BMW;
  BMW.honk();
}
