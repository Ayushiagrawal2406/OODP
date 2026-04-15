#include <iostream>
using namespace std;
class ATM {
    float balance;
public:
    ATM() 
    {
        balance = 0;
    }
    void deposit(float amt) 
    {
        balance += amt;
        cout << "Amount Deposited\n";
    }
    void withdraw(float amt) 
    {
        if (amt <= balance) 
        {
            balance -= amt;
            cout << "Amount Withdrawn\n";
        }
        else 
        {
            cout << "Insufficient Balance\n";
        }
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    ATM a;
    int choice;
    float amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                a.deposit(amount);
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                a.withdraw(amount);
                break;
            case 3:
                a.showBalance();
                break;
            case 4:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } 
    while(choice != 4);
    return 0;
}