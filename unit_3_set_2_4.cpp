#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting...\n";
    }
};
class PetrolCar : public Vehicle {
public:
    void start() {
        cout << "Petrol car starts\n";
    }
};
class ElectricCar : public Vehicle {
public:
    void start() {
        cout << "Electric car starts\n";
    }
};
int main() {
    PetrolCar p;
    ElectricCar e;
    Vehicle* v;
    v = &p;
    (*v).start();
    v = &e;
    (*v).start();

    return 0;
}