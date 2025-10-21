/*  Create a class Account with private members accountNumber and
balance. Provide setter and getter methods. In main(), ensure that
account details can only be accessed through these methods.*/

#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    int balance;

public:
    // Setters
    void setAccountNumber(int accNo) { 
        accountNumber = accNo; 
    }

    void setBalance(int bal) { 
        balance = bal; 
    }

    // Getters
    int getAccountNumber() { 
        return accountNumber; 
    }

    int getBalance() { 
        return balance; 
    }
};

int main() {
    Account acc;

    // Set values using setters
    acc.setAccountNumber(12345);
    acc.setBalance(5000);

    // Access values only through getters
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance       : " << acc.getBalance() << endl;

    return 0;
}
