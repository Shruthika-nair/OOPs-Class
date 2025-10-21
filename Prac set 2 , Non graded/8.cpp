// Print all odd numbers between 1 and 50 using a while loop.

#include <iostream>
using namespace std; 

int main(){
    int num = 1;

    while(num <= 50){
        cout<<num <<" ";
        num = num + 2;
    }
    cout << endl;

    return 0 ;
}