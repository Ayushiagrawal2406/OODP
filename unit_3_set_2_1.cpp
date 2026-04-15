#include <iostream>
using namespace std;
class Vehicle 
{
public:
    string brand;
    int speed;
    void getVehicleInfo() {
        cout << "Enter brand and speed: ";
        cin >> brand >> speed;
    }
};
class Car : public Vehicle 
{
public:
    int seatingCapacity;
    void getCarInfo() {
        cout << "Enter seating capacity: ";
        cin >> seatingCapacity;
    }
    void display() {
        cout << "\nCar Details\n";
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};

int main() 
{
    Car c;
    c.getVehicleInfo();
    c.getCarInfo();
    c.display();
    return 0;
}