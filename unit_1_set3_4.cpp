#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string name;
    float price;

    void input() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
    }
    void show() {
        cout << "\nId: " << id;
        cout << "\nName: " << name;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Book *b = new Book;   
    (*b).input();           
    (*b).show(); 
    return 0;
}