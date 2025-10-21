// Take a number as input and check if it is an Armstrong number using a while loop.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num , og_num , reminder , n = 0 , result = 0; 

    cout<< " enter a number:";
    cin>> num;

    og_num = num ;

    int temp_num = og_num;
    while(temp_num != 0){
        temp_num = temp_num/10;
        n++;
    }

    temp_num = og_num;

}


?? DO AGAIN 