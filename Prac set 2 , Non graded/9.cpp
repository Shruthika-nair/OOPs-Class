//Write a program that keeps asking the user for input until they enter
// a negative number (do-while loop).

#include <iostream>
using namespace std ; 

int main() {
    int num; 

    do{
        cout<< " enyer a positive number ( enter a negative number to stop) : ";
        cin>> num;
    } 
    while ( num >= 0);

    cout<<" u entererd negative number so code stopped da"<< endl;

    return 0 ;
}