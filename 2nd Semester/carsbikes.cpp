//We want to share the information of different vehicles. Create a class named Vehicle with two data membres named millege and price. Create two subclasses 'car' with data membres to store 'ownership cost', 'warranty(year)', 'seating capacity' and 'fuel tank size'. Class 'bike' with data members 'number of cylinder', 'number of gears', 'cooling type(air, liquid or oil)', 'wheel type', 'fuel tank size'. Make another two subclasses 'Porsche' and 'Volvo' of car each having a data member to store the 'model type'. Make two classes 'Ducati' and 'BMW' to store the 'make type'. Now store and print the information of the Porsche and Volvo car and do the same for the Ducati and BMW Bikes
#include <iostream>
using namespace std;

class Vehicle {
private:
    float Mileage;
    float Price;
public:
    Vehicle() {}
    Vehicle(float mileage, float price) : Mileage(mileage), Price(price) {}

    float getMileage() {
        return Mileage;
    }

    float getPrice() {
        return Price;
    }

    void display() {
        cout << "Mileage: " << Mileage << " km/l\n";
        cout << "Price: $" << Price << "\n";
    }
};

class Car : public Vehicle {
private:
    float OwnershipCost;
    int Warranty;
    int SeatingCapacity;
    double FuelTankSize;
public:
    Car() {}
    Car(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, double fuelTankSize)
        : Vehicle(mileage, price), OwnershipCost(ownershipCost), Warranty(warranty), SeatingCapacity(seatingCapacity), FuelTankSize(fuelTankSize) {}

    float getOwnershipCost() {
        return OwnershipCost;
    }

    int getWarranty() {
        return Warranty;
    }

    int getSeatingCapacity() {
        return SeatingCapacity;
    }

    double getFuelTankSize() {
        return FuelTankSize;
    }

    void display() {
        cout << "Car\n";
        Vehicle::display();
        cout << "Ownership Cost: $" << OwnershipCost << "\n";
        cout << "Warranty: " << Warranty << " years\n";
        cout << "Seating Capacity: " << SeatingCapacity << "\n";
        cout << "Fuel Tank Size: " << FuelTankSize << " liters\n";
    }
};

class Bike : public Vehicle {
private:
    int NumberCylinders;
    int NumberGears;
    string CoolingType;
    string WheelType;
    double FuelTankSize;
public:
    Bike() {}
    Bike(float mileage, float price, int numberCylinders, int numberGears, string coolingType, string wheelType, double fuelTankSize)
        : Vehicle(mileage, price), NumberCylinders(numberCylinders), NumberGears(numberGears), CoolingType(coolingType), WheelType(wheelType), FuelTankSize(fuelTankSize) {}
    int getNumberCylinders() {
        return NumberCylinders;
    }
    int getNumberGears() {
        return NumberGears;
    }
    string getCoolingType() {
        return CoolingType;
    }
    string getWheelType() {
        return WheelType;
    }
    double getFuelTankSize() {
        return FuelTankSize;
    }
    void display() {
        cout << "Bike\n";
        Vehicle::display();
        cout << "Number of Cylinders: " << NumberCylinders << "\n";
        cout << "Number of Gears: " << NumberGears << "\n";
        cout << "Cooling Type: " << CoolingType << "\n";
        cout << "Wheel Type: " << WheelType << "\n";
        cout << "Fuel Tank Size: " << FuelTankSize << " liters\n";
    }
};
class Porsche : public Car {
private:
    string ModelType;
public:
    Porsche(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, double fuelTankSize, string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelTankSize), ModelType(modelType) {}
    void display() {
        Car::display();
        cout << "Model Type: " << ModelType << "\n";
    }
};
class Volvo : public Car {
private:
    string ModelType;
public:
    Volvo(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, double fuelTankSize, string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelTankSize), ModelType(modelType) {}
    void display() {
        Car::display();
        cout << "Model Type: " << ModelType << "\n";
    }
};
class Ducati : public Bike {
private:
    string MakeType;
public:
    Ducati(float mileage, float price, int numberCylinders, int numberGears, string coolingType, string wheelType, double fuelTankSize, string makeType)
        : Bike(mileage, price, numberCylinders, numberGears, coolingType, wheelType, fuelTankSize), MakeType(makeType) {}
    void display() {
        Bike::display();
        cout << "Make Type: " << MakeType << "\n";
    }
};
class BMW : public Bike {
private:
    string MakeType;
public:
    BMW(float mileage, float price, int numberCylinders, int numberGears, string coolingType, string wheelType, double fuelTankSize, string makeType)
        : Bike(mileage, price, numberCylinders, numberGears, coolingType, wheelType, fuelTankSize), MakeType(makeType) {}
    void display() {
        Bike::display();
        cout << "Make Type: " << MakeType << "\n";
    }
};
int main() {
    Porsche carPorsche(15, 100000, 5000, 5, 4, 60, "911 Carrera");
    Volvo carVolvo(12, 80000, 4000, 3, 5, 70, "XC90");
    Ducati bikeDucati(18, 20000, 2, 6, "Liquid", "Alloy", 15, "Panigale V4");
    BMW bikeBMW(20, 22000, 2, 6, "Air", "Spoke", 17, "S1000RR");
    carPorsche.display();
    cout << "\n";
    carVolvo.display();
    cout << "\n";
    bikeDucati.display();
    cout << "\n";
    bikeBMW.display();
    return 0;
}
