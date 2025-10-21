// Check whether a number is prime or not using a for loop.

#include <iostream>
using namespace std;

int main(){
    int num , i ; 

    cout << " enter a positiviber intger:";
    cin>> num;

    if(num<= 1){
        cout<< num << " is not prime number"<<endl;
        return 0 ;
    }

    for( i = 2 ; i < num ; i++){
        if(num % i == 0){
            break;
        }
    }

    if( i == num){
        cout << num << " is a prime number" << endl;
    } 
    else{
        cout<< num << " is not a prime number"<< endl;
    }
    return 0 ;
}