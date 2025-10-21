// GCD , TWO NUM , WHILE LOOP 

#include <iostream>
using namespace std ; 

int main(){
    int num1 , num2;

    cout << " enter the first number:";
    cin>> num1;

    cout<< " enter the second number:";
    cin >> num2;

    while(num2 !=0){
        int temp = num2;
        num2=num1%num2;
        num1 = temp;
    }
    cout <<'the GCD is : ' << num1 << endl;

    return 0 ;
}