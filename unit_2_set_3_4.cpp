#include <iostream>
using namespace std;
class Student {
public:
    int marks;
    Student(int m) {
        marks = m;
    }
    bool operator>(Student s) 
    {
        if (marks > s.marks)
            return true;
        else
            return false;
    }
};
int main() {
    Student s1(85);
    Student s2(70);
    if (s1 > s2)
        cout << "Student 1 has higher marks";
    else
        cout << "Student 2 has higher marks";

    return 0;
}