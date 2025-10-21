/* Write a class BankAccount with features like deposit(), withdraw(), and display().
Use constructor initialization and show how encapsulation prevents invalid access.
Explain why data hiding is essential in banking systems.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        if (initialBalance < 0)
            balance = 0; 
        else
            balance = initialBalance;
    }

 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    
    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    BankAccount account1("Shruthika", 12345, 5000);

    account1.display();

    account1.deposit(2000);
    account1.withdraw(1000);
    account1.withdraw(7000); 

    account1.display();

    return 0;
}
