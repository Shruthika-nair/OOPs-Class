#include<iostream>
using namespace std;
class my_array{
    private:
        int n;
        int i=0;
        int* arr;

        void detail_of_array(){
            cout<<"Size of an Array is : "<<n<<endl;
        }
    public:
        my_array(int size){
            this->n=size;
            arr = new int[n];
        }
        void append(int value){
            arr[i]=value;
            i++;
        }
        void get_details(){
            detail_of_array(); // vv imp for exam.
            for(int j=0;j<i;j++){
                cout<<arr[j]<<" "<<endl;
            }
        }
};
