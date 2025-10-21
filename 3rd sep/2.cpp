#include<iostream>
using namespace std;
class complex{
    float x;
    float y;
    public:
    static int count;
        complex(float a,float b){
            this->x=a;
            this->y=b;
            count++;
            cout<<"This is co"<<count<<"complex number"<<endl;

        }
        void get_details(void){
            cout<<"X :"<<this->x<<"Y:"<<this->y<<endl;
        }
        void sum_complex(complex a1,complex a2){}
};
int complex :: count=0;
int main(){
    complex c1(2,3),c2(4,5);
    c2.get_details();
    c1.get_details();

}