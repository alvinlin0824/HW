// Design a class of eCash to simulate the behavior of stored-value cards
// Private members:
// Attribute : Money currently available amount
// Public members:
// Method: eCash () constructor (initialize Money to 0 yuan)
// Method: void store (int m) store value (store m in Money)
// Method: void pay (int m) consumption (consume Money for m yuan)
// (Reminder: It is necessary to judge whether the current eCash has sufficient amount for consumption)
// Method: void display() Display the current balance (output Money to the screen)
// Main program
// Enter 's': stored value
// Type 'p': spend
// Enter 'd': check balance
// Type 'q': exit the program

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class UserAccount {
private:
    int moneyAvailable = 0;

public:

    // Store money method
    void store(double amount) {
        if (amount >= 0){
        moneyAvailable += amount;
        cout << "eCash: You Stored " << amount << "." << endl;
        } 
        else {
        cout << "eCash: Please enter a number > 0." << endl;
        }
    }

    // Pay consumption method
    bool pay(double amount) {
        if (amount < 0) {
            cout << "eCash: Please enter a number > 0." << endl;
            return false;
        }
        else if (moneyAvailable >= amount) {
            moneyAvailable -= amount;
            cout << "eCash: You spend " << amount << "." << endl;
            return true;
        } else {
            cout << "eCash: Insufficient Balance." << endl;
            return false;
        }
    }

    // Display balance method
    double display() {
        cout << "eCash: You remaining " << moneyAvailable << endl;
        return moneyAvailable;
    }
};

int main() {

    UserAccount account;

    char choice;
    while(true) {
        // cout << "=== Welcome eCash ===" << endl;
        // cout << endl;
        // cout << "Hello! Please select choices:" << endl;
        // cout << "s: Store" << endl;
        // cout << "p: Purchase" << endl; 
        // cout << "d: Display balance" << endl;
        // cout << "q: Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 's':
                double amount;
                // cout << "Enter the amount to store: ";
                cin >> amount;
                account.store(amount);
                break;
            case 'p':
                double cost;
                // cout << "Enter the amount to pay: ";
                cin >> cost;
                account.pay(cost);
                break;
            case 'd':
                account.display();
                break;
            case 'q':
                cout << "Thank you. Bye Bye.";
                return 0;
                break;
        }
        system("pause");
        system("cls");
    } 

    return 0;
}