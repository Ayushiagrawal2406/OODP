#include <iostream>
using namespace std;

class ChargingSystem {
public:
    virtual void charge() = 0;  
};

class FastCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Fast charging\n";
    }
};
class NormalCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Normal charging\n";
    }
};
int main() {
    ChargingSystem *c;
    FastCharging f;
    NormalCharging n;
    c = &f;
    (*c).charge();
    c = &n;
    (*c).charge();
    return 0;
}