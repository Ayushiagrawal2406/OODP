#include <iostream>
using namespace std;

class Engine {
public:
    void engineStart() 
    {
        cout << "Engine started\n";
    }
};

class GPS 
{
public:
    void navigate() 
    {
        cout << "GPS navigation started\n";
    }
};

class SmartCar : public Engine, public GPS 
{
public:
    void drive() 
    {
        engineStart();
        navigate();
        cout << "Smart driving enabled\n";
    }
};

int main() 
{
    SmartCar s;
    s.drive();
    return 0;
}