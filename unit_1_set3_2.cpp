#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[100], total = 0;

    for(int i = 0; i < n; i++) {
        cout << "Enter mark: ";
        cin >> marks[i];
        total = total + marks[i];
    }

    float avg = total / (float)n;   

    cout << "Total marks = " << total << endl;
    cout << "Average = " << avg << endl;

    if(avg >= 80)
        cout << "Grade A";
    else if(avg >= 60)
        cout << "Grade B";
    else if(avg >= 40)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}