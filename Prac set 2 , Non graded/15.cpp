// print  apatterm 

#include <iostream>
using namespace std;

int main() {
    int rows = 5 ;

    // outer loop for rows 
    for ( int i = 1 ; i <= rows ; i ++){
        // inner loops for stars in each row 
        for ( int j = 1 ; j<= i ; j++){
            cout<< "*";
        }
        cout << endl;
    }
    return 0 ; 
}