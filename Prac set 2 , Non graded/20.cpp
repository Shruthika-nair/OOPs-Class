// Write a program to keep taking marks as input until the user enters
 // −1, then print the average of the entered marks.

 #include <iostream>
 using namespace std ; 

 int main(){

    int marks , sum = 0 , count = 0 ; 


    cout << " enter marks , enter - 1 to stop "<< endl;

    cout<<"marks: ";
    cin>> marks;

    while(marks!= -1){
        sum = sum + marks;
        count++;


        cin>>marks;
    }

    if(count> 0)
        cout << " Average = " << ( sum /(float) count);

    else 
        cout << " no marks entered" ; 

    return 0 ; 

 }