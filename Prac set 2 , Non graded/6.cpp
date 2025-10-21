// Print the digits of a number in reverse order using a do-while loop.

#include <iostream>
using namespace std;

int main(){
    int num , reminder ;

    cout<<"enter a number to be reversed : ";
    cin>>num ; 

    cout<< " the digits in rev order are : ";


    do {
        reminder = num %10;
        cout<< reminder;
        num = num / 10;
    }
    while (num!=0);

    cout<<endl;
    return 0 ;




}