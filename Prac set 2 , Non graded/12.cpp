//12. Use if-else with a loop: Print “Fizz” if a number is divisible by
//3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (for
//numbers 1 to 50).

#include <iostream>
using namespace std;

int main(){

    for(int num = 1 ; num <= 50 ; num++){
        if( num%3 == 0 && num % 5 == 0){
            cout << "FizzBuzz" << endl;
        }
        else if ( num % 3 == 0){
            cout << " Fizz" << endl;
        }
        else if ( num % 5 == 0){
            cout << "Buzz" << endl;
        }
        else{
            cout<< num << endl;
        }

        
    }
    return 0 ;
}