// Write a program to find the factorial of a number using a while loop.

#include <iostream>
using namespace std;

int main() {
    int num , fact = 1;

    cout<< "Enter a number : " ;
    cin>>num;

    if(num<0){
        cout<<"non negatve number so factorial does not exost , input diff number";

    }
    else{
        int i = num;
        while(i>0){
            fact = fact*i;
            i-- ;
        }
        cout << " the factorial of : " << num  << " is " << fact << endl;
    }
    return 0 ;
}