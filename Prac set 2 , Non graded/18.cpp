// Print the Fibonacci sequence up to N terms using a for loop.

#include <iostream>
using namespace std;

int main(){

    int num , a = 0 , b = 1 , c ;

    cout<< " enter a number";
    cin >> num ;

    cout << " the fibonacci swries is " ; 

    if( num >=1){
        cout<<a<<" ";

    }
    if(num>=2){
        cout<<b<<" ";
    }
    for(int i = 3 ; i <=num ; i++){
    c = a + b ;
    cout<< c << " ";
    a = b ;
    b = c;
    }

    cout<<endl;
    return 0 ;
}
