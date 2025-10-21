/* Implement a class BankAccount with data members accountNumber,
balance. Write multiple constructors for:
• Default initialization.
• Initialization with account number only.
• Initialization with account number and balance.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    int balance;

public:
    // Default constructor
    BankAccount() {
        accountNumber = 0;
        balance = 0;
    }

    // Constructor with account number only
    BankAccount(int accNo) {
        accountNumber = accNo;
        balance = 0;
    }

    // Constructor with account number and balance
    BankAccount(int accNo, int bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Function to display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance       : " << balance << endl;
    }
};

int main() {
    BankAccount b1;               // Default constructor
    BankAccount b2(12345);        // Account number only
    BankAccount b3(67890, 5000);  // Account number and balance

    cout << "Bank Account b1:" << endl;
    b1.display();
    cout << endl;

    cout << "Bank Account b2:" << endl;
    b2.display();
    cout << endl;

    cout << "Bank Account b3:" << endl;
    b3.display();

    return 0;
}
