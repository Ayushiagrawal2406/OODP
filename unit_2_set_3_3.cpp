#include <iostream>
using namespace std;

class Student {
public:
    void calculateMarks(int internal, int external) 
    {
        int total= internal + external;
        cout << "Total Marks: " << total << endl;
    }

   
    void calculateMarks(int internal, int external, int assignment) 
    {
        int total = internal + external + assignment;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Student s;

    s.calculateMarks(20, 30);
    s.calculateMarks(20, 30, 10);

    return 0;
}