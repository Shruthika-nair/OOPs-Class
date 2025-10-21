#include<iostream>
using namespace std;
class my_array{
    private:
        int n;
        int i=0;
        int* arr;

        void detail_of_array(){
            cout<<"Size of an array is "<<n<<endl;
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
int main(){
    my_array m1(5);
    m1.append(1);
    m1.append(2);
    m1.get_details();
    return 0;
}