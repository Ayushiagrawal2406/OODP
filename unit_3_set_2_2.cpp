#include <iostream>
using namespace std;

class Vehicle 
{
public:
    string brand;
    int speed;
};
class Car : public Vehicle 
{
public:
    int seatingCapacity;
};

class ElectricCar : public Car 
{
public:
    int batteryRange;
    string chargingTime;
    void getData() 
    {
        cout << "Enter brand, speed, seating capacity, battery range, charging time: ";
        cin >> brand >> speed >> seatingCapacity >> batteryRange >> chargingTime;
    }
    void display() 
    {
        cout << "\n Electric Car Details \n";
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seats: " << seatingCapacity << endl;
        cout << "Battery Range: " << batteryRange << " km" << endl;
        cout << "Charging Time: " << chargingTime << endl;
    }
};

int main() 
{
    ElectricCar e;
    e.getData();
    e.display();
    return 0;
}