//we want to share the information of different vehicles, create a class named vehicle with two data members named mileage and price create two subclasses car with data members to store ownership cost and warranty(years), seating capacity and fuel type. bike with data members to store the number the number of cylenders, gears, cooling type air, liquid, oil, wheel type and fuel tank size. make anothe two subclasses of car each having a data members to store the model type. next make two subclasses bajaj and tvs each having a data member to store the make type. now store and print all the information of a audi and ford car. do the same for a bajaj and a tvs bike.
#include<iostream>
using namespace std;
class Vehicle{
public:
  float mileage;
  int price;
};

class Car: public Vehicle{
public: 
  int ownershipCost;
  int warranty;
  int seatingCapacity;
  string FuelType;
};

class Bike: public Vehicle{
public:
  int numberOfCylenders;
  int numberOfGears;
  string coolingType;
  string wheelType;
  float fuelTankSize;
};

class Porsche: public Car{
public:
  string modelType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"ownershipCost:"; cin>> ownershipCost;
    cout<<"warranty:"; cin>> warranty;
    cout<<"seatingCapacity:"; cin>> seatingCapacity;
    cout<<"FuelType:"; cin>> FuelType;
    cout<<"modelType:"; cin>> modelType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"ownershipCost:"<<ownershipCost<<endl;
    cout<<"warranty:"<<warranty<<endl;
    cout<<"seatingCapacity:"<<seatingCapacity<<endl;
    cout<<"FuelType:"<<FuelType<<endl;
    cout<<"modelType:"<<modelType<<endl;
  }
};

class Volvo: public Car{
public:
  string modelType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"ownershipCost:"; cin>> ownershipCost;
    cout<<"warranty:"; cin>> warranty;
    cout<<"seatingCapacity:"; cin>> seatingCapacity;
    cout<<"FuelType:"; cin>> FuelType;
    cout<<"modelType:"; cin>> modelType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"ownershipCost:"<<ownershipCost<<endl;
    cout<<"warranty:"<<warranty<<endl;
    cout<<"seatingCapacity:"<<seatingCapacity<<endl;
    cout<<"FuelType:"<<FuelType<<endl;
    cout<<"modelType:"<<modelType<<endl;
  }
};

class Ducati: public Bike{
public:
  string makeType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"numberOfCylenders:"; cin>> numberOfCylenders;
    cout<<"numberOfGears:"; cin>> numberOfGears;
    cout<<"coolingType:"; cin>> coolingType;
    cout<<"wheelType:"; cin>> wheelType;
    cout<<"fuelTankSize:"; cin>> fuelTankSize;
    cout<<"makeType:"; cin>>makeType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"numberOfCylenders:"<<numberOfCylenders<<endl;
    cout<<"numberOfGears:"<<numberOfGears<<endl;
    cout<<"coolingType:"<<coolingType<<endl;
    cout<<"wheelType:"<<wheelType<<endl;
    cout<<"fuelTankSize:"<<fuelTankSize<<endl;
    cout<<"makeType:"<<makeType<<endl;
  }
};

class BMW: public Bike{
public:
  string makeType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"numberOfCylenders:"; cin>> numberOfCylenders;
    cout<<"numberOfGears:"; cin>> numberOfGears;
    cout<<"coolingType:"; cin>> coolingType;
    cout<<"wheelType:"; cin>> wheelType;
    cout<<"fuelTankSize:"; cin>> fuelTankSize;
    cout<<"makeType:"; cin>>makeType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"numberOfCylenders:"<<numberOfCylenders<<endl;
    cout<<"numberOfGears:"<<numberOfGears<<endl;
    cout<<"coolingType:"<<coolingType<<endl;
    cout<<"wheelType:"<<wheelType<<endl;
    cout<<"fuelTankSize:"<<fuelTankSize<<endl;
    cout<<"makeType:"<<makeType<<endl;
  }
};
int main(){
  Porsche Macan;
  Volvo XC;
  Ducati d;
  BMW b;
  Macan.getintel();
  Macan.giveintel();
  XC.getintel();
  XC.giveintel();
  d.getintel();
  d.giveintel();
  b.getintel();
  b.giveintel();
}
