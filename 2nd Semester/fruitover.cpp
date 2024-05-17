#include <iostream>
using namespace std;
class Fruit {
public:
  virtual int get_count() const = 0;
};
class Apple : public Fruit {
private:
  int count;  // Member variable to store apple count
public:
  Apple(int count = 3) : count(count) {}
  int get_count() const override {
    return count;
  }
};
class Mango : public Fruit {
private:
  int count;  // Member variable to store mango count
public:
  Mango(int count = 7) : count(count) {}
  int get_count() const override {
    return count;
  }
};
class Basket {
private:
  Apple apples;  // Instance of Apple class
  Mango mangoes;   // Instance of Mango class
public:
  Basket(const Apple& apples, const Mango& mangoes) : apples(apples), mangoes(mangoes) {}
  int total_count() const {
    return apples.get_count() + mangoes.get_count();
  }
};
int main() {
  Apple apples;
  Mango mangoes;
  Basket basket(apples, mangoes);
  cout << "Total Fruits in the basket = " << basket.total_count() << endl;
  return 0;
}
