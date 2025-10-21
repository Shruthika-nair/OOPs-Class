// Print the sum of all even numbers from 1 to 100 using a for loop.

#include<iostream>
using namespace std;

int main() { 
    int sum = 0;

    for(int i = 2 ; i <= 100 ; i+= 2){
        sum = sum + i;
    }
    cout<<" the sum of all even numbers frm 1 to 100 is : " << sum << endl;

    return 0 ;
}