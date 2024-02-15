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
  Car MBUSA;
  MBUSA.honk();
}
