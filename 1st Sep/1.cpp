#include<iostream>
#include<string>

using namespace std;
class bank_account{
    private:
        string name;
        float bal;
    public:
        void set_value(string n, float b){
            this -> name = n;
            this -> bal = b;
        }
        void get_values(void){ // methods or member functions
            cout<<"Name:" << this ->name << " Balnce:"<< this->bal<<endl;
        }

};
int main(){
    bank_account a1;
    bank_account a2;
    a1.set_values("Shruthika" , 10000.90);
    a2.set_values("Ishitha" , 100.45);
    a1.get_values();
    a2.get_values();
    a1.deposit(5000.5);
    a2.deposit(6000.98);
    a1.get_values();
    a2.get_values();
    return 0 ;
}