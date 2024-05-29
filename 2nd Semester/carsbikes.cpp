//We want to share the information of different vehicles. Create a class named Vehicle with two data membres named millege and price. Create two subclasses 'car' with data membres to store 'ownership cost', 'warranty(year)', 'seating capacity' and 'fuel tank size'. Class 'bike' with data members 'number of cylinder', 'number of gears', 'cooling type(air, liquid or oil)', 'wheel type', 'fuel tank size'. Make another two subclasses 'Porsche' and 'Volvo' of car each having a data member to store the 'model type'. Make two classes 'Ducati' and 'BMW' to store the 'make type'. Now store and print the information of the Porsche and Volvo car and do the same for the Ducati and BMW Bikes
#include <iostream>
using namespace std;

class Vehicle {
private:
    float Mileage;
    float Price;
public:
    Vehicle() {}
    Vehicle(float Mileage, float Price) {
        this->Mileage = Mileage;
        this->Price = Price;
    }
    float getMileage() {
        return this->Mileage;
    }
    float getPrice() {
        return this->Price;
    }
    virtual void display() {
        cout << "Mileage: " << Mileage << "\n";
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
    Car(float Mileage, float Price, float OwnershipCost, int Warranty, int SeatingCapacity, double FuelTankSize)
        : Vehicle(Mileage, Price) {
        this->OwnershipCost = OwnershipCost;
        this->Warranty = Warranty;
        this->SeatingCapacity = SeatingCapacity;
        this->FuelTankSize = FuelTankSize;
    }
    float getOwnershipCost() {
        return this->OwnershipCost;
    }
    int getWarranty() {
        return this->Warranty;
    }
    int getSeatingCapacity() {
        return this->SeatingCapacity;
    }
    double getFuelTankSize() {
        return this->FuelTankSize;
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
    Bike(float Mileage, float Price, int NumberCylinders, int NumberGears, string CoolingType, string WheelType, double FuelTankSize)
        : Vehicle(Mileage, Price) {
        this->NumberCylinders = NumberCylinders;
        this->NumberGears = NumberGears;
        this->CoolingType = CoolingType;
        this->WheelType = WheelType;
        this->FuelTankSize = FuelTankSize;
    }
    int getNumberCylinders() {
        return this->NumberCylinders;
    }
    int getNumberGears() {
        return this->NumberGears;
    }
    string getCoolingType() {
        return this->CoolingType;
    }
    string getWheelType() {
        return this->WheelType;
    }
    double getFuelTankSize() {
        return this->FuelTankSize;
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
    Porsche(float Mileage, float Price, float OwnershipCost, int Warranty, int SeatingCapacity, double FuelTankSize, string ModelType)
        : Car(Mileage, Price, OwnershipCost, Warranty, SeatingCapacity, FuelTankSize) {
        this->ModelType = ModelType;
    }
    void display() {
        Car::display();
        cout << "Model Type: " << ModelType << "\n";
    }
};
class Volvo : public Car {
private:
    string ModelType;
public:
    Volvo(float Mileage, float Price, float OwnershipCost, int Warranty, int SeatingCapacity, double FuelTankSize, string ModelType)
        : Car(Mileage, Price, OwnershipCost, Warranty, SeatingCapacity, FuelTankSize) {
        this->ModelType = ModelType;
    }
    void display() {
        Car::display();
        cout << "Model Type: " << ModelType << "\n";
    }
};
class Ducati : public Bike {
private:
    string MakeType;
public:
    Ducati(float Mileage, float Price, int NumberCylinders, int NumberGears, string CoolingType, string WheelType, double FuelTankSize, string MakeType)
        : Bike(Mileage, Price, NumberCylinders, NumberGears, CoolingType, WheelType, FuelTankSize) {
        this->MakeType = MakeType;
    }
    void display() {
        Bike::display();
        cout << "Make Type: " << MakeType << "\n";
    }
};
class BMW : public Bike {
private:
    string MakeType;
public:
    BMW(float Mileage, float Price, int NumberCylinders, int NumberGears, string CoolingType, string WheelType, double FuelTankSize, string MakeType)
        : Bike(Mileage, Price, NumberCylinders, NumberGears, CoolingType, WheelType, FuelTankSize) {
        this->MakeType = MakeType;
    }
    void display() {
        Bike::display();
        cout << "Make Type: " << MakeType << "\n";
    }
};
int main() {
    Porsche carPorsche(15, 100000, 5000, 5, 4, 60, "911 Carrera");
    Volvo carVolvo(12, 80000, 4000, 3, 5, 70, "XC90");
    Ducati bikeDucati(18, 20000, 4, 6, "Liquid", "Alloy", 15, "Monster");
    BMW bikeBMW(20, 22000, 4, 6, "Air", "Spoke", 17, "S1000RR");
    carPorsche.display();
    cout << "\n";
    carVolvo.display();
    cout << "\n";
    bikeDucati.display();
    cout << "\n";
    bikeBMW.display();
    return 0;
}

