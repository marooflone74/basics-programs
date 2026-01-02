#include <iostream>
using namespace std;

int main() {
    double amount;
    int pin, choice;
    double balance = 20000;

    cout << "Welcome to ATM MZD" << endl;
    cout << "Enter your pin: ";
    cin >> pin;

    if (pin == 12345) {

        while (true) {
            cout << "\n-------- ATM MENU --------" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Withdraw Money" << endl;
            cout << "3. Deposit Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Your current balance is: RS " << balance << endl;
            }

            else if (choice == 2) {
                cout << "Enter withdrawal amount: RS ";
                cin >> amount;

                if (amount > balance)
                    cout << "Insufficient funds!" << endl;
                else if (amount <= 0)
                    cout << "Invalid amount!" << endl;
                else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: RS " << balance << endl;
                }
            }

            else if (choice == 3) {
                cout << "Enter deposit amount: RS ";
                cin >> amount;

                if (amount <= 0)
                    cout << "Invalid deposit amount!" << endl;
                else {
                    balance += amount;
                    cout << "Deposit successful. New balance: RS " << balance << endl;
                }
            }

            else if (choice == 4) {
                cout << "Exiting..." << endl;
                break;
            }

            else {
                cout << "Invalid choice, try again!" << endl;
            }
        }

    }

    else {
        cout << "Invalid pin... exiting..." << endl;
    }

    return 0;
}

