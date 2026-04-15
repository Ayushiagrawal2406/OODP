#include <iostream>
using namespace std;
class Student 
{
    string name;
    int roll;

public:
    Student(string n, int r) 
    {
        name = n;
        roll = r;
    }
    Student(Student &s) 
    {
        name = s.name;
        roll = s.roll;
    }
    void show() 
    {
        cout << "\nName: " << name <<endl;
        cout << "\nRoll: " << roll << endl;
    }
};

int main()
{
    Student s1("Ayushi", 91);
    Student s2(s1);   
    s1.show();
    s2.show();
    return 0;
}