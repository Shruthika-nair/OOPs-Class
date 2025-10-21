/* Create 2 classes 
matrices-4 elements, 
vector-2 elements
Class multiplication-
Multiply matrix and vector using multiple inheritance*/

#include<iostream>
using namespace std;

class matrice{
    private:
        int num_1;
        int num_2;
        int num_3;
        int num_4;
    public:
        matrice(int element){
            this -> num_1 = element;
            this-> num_2 = element;
            this -> num_3 = element;
            this -> num_4 = element;
        }
    void get_details(){
        cout<<" enter num 1 : " << num_1 << endl;
        cout << " enter num 2 : " << num_2 << endl;
        cout << " enter num 3 : " << num_3 << endl;
        cout << " enter num 4 : " << num_4 << endl;
    }


};

