#include<iostream>
#include<string>
using namespace std;

class state_bank {
private:
    string name;
    int account_nu;
    float bal;
public:
    static float total_balance;

    state_bank(string n, int a, float b){
        this->name = n;
        this->account_nu = a;
        this->bal = b;
        total_balance += b;  // Update shared total
    }

    void get_details(void){
        cout << "Name: " << this->name << endl
             << "Account number: " << this->account_nu << endl
             << "Balance: " << this->bal << endl;
        cout << "Total balance of bank is: " << total_balance << endl;
    }
};

float state_bank::total_balance = 0;

int main(){
    state_bank a1("Shruthika", 23567, 4000.0);
    a1.get_details();
    state_bank a2("Arjun", 1111, 10000.0);
    a2.get_details();

    return 0;
}

