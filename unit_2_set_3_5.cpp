#include <iostream>
using namespace std;
class Student 
{
public:
    Student() {
        cout << "Student record is created\n";
    }

    ~Student() {
        cout << "Student record is deleted\n";
    }
};

int main() 
{
    Student s1;
    return 0;
}