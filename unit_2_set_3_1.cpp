#include <iostream>
using namespace std;
class Student 
{
private:
    string name;
    int roll;
public:
    Student() {
        name = "Not Given";
        roll = 0;
    }
    Student(string n, int r) {
        name = n;
        roll = r;
    }
    void display() {
        cout << "\nName: " << name<<endl;
        cout << "\nRoll: " << roll << endl;
    }
};

int main() 
{
    Student s1;               
    Student s2("Ayushi", 91);   
    s1.display();
    s2.display();
    return 0;
}