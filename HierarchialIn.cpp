#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle is started" << endl; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving" << endl; }
};

class Bike : public Vehicle {
public:
    void ride() { cout << "Bike is riding" << endl; }
};

int main()
{
    
    Car obj;
    Bike B;
    obj.start();
    obj.drive();
    B.start();
    B.ride();
}