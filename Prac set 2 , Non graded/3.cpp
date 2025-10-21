// Print the multiplication table of a given number using a do-while loop.

#include<iostream>
using namespace std ;

int main(){
    int num , i = 1;

    cout<< " enter a number to create table : ";
    cin>> num ;

    cout<< " multiplacation table of " << num << " is " << endl;

    do {
        cout<< num << " x " << i << "=" << (num*i) << endl;
        i++;
    } 
    while ( i <= 10);
    return 0 ;
}