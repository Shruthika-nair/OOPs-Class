// Find the sum of the first N natural numbers (input N) using a for
//loop.

#include <iostream>
using namespace std ;

int main(){
    int num , sum = 0 ;

    cout<< " enter a nuber : ";
    cin>> num;

    if(num <= 0){
        cout<<" invalid input . enter a positive integer"<<endl;
    }

    for(int i = 1 ; i<= num ; i ++){
        sum = sum + i ;
    }
    cout<<"the sum of the first" << num << " natural number is " << sum << endl;

    return 0 ;
}