#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basic, gross, hra, da;

public:
    void read() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = 0.2 * basic;
        da = 0.1 * basic;
        gross = basic + hra + da;
    }

    void display() {
        cout << "ID: \n" << id;
        cout << "Name: \n" << name;
        cout << "Gross Salary: \n" << gross << endl;
    }
};

int main() {
    Employee e1, e2;

    cout << "Enter details for Employee 1:\n";
    e1.read();
    e1.calculate();

    cout << "\nEnter details for Employee 2:\n";
    e2.read();
    e2.calculate();

    cout << "\nEmployee Details:\n";
    e1.display();
    e2.display();

    return 0;
}