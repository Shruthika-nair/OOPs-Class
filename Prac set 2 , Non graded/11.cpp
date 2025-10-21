// Write a program to calculate the power of a number (a^b) using a while loop 

#include <iostream>
using namespace std;

int main(){
    int base , exponent;
    int result = 1 ;

    cout << " enter the base number:";
    cin>> base;

    cout<< " enter the ecponent number:";
    cin>> exponent;

    int og_exponent = exponent;

    while( exponent > 0){
        result= result*base;
        exponent--;
    }

    cout<< base << "^" << og_exponent<<"="<<result<<endl;

    return 0 ;
}