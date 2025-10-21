// Write a program to find the largest digit in a number using a do-while loop.

#include <iostream>
using namespace std;

int main(){
    int num , og_num , digit ; 
    int largest_digit= 0 ;

    cout << "enter a number:";
    cin>> num;

    og_num = num;

    if(og_num == 0){
     largest_digit= 0;
    }
    else{
    do{
        digit = num % 10 ;
        if ( digit > largest_digit){
            largest_digit = digit;
        }
        num = num /10;
    }
    while ( num != 0);
    }
    cout << " The largest digit in" << og_num << " is : " << largest_digit << endl;

    return 0 ; 
}