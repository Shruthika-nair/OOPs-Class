//
#include <iostream>
using namespace std;
class xy_cords{
    private:
        float x;
        float y;
    public:
        void set_value(float a1,float a2);
        void get_value (void);

        //Constructor (Learn Abt IT) This is a default constructor./
        xy_cords(float a1){
            cout << " Hello World !"<<a1 << endl;
            this->x = 67;
        this->y = 89;
           }
    

};
void xy_cords :: set_value(float a1, float a2){
    this->x =a1;
    this->y = a2;
};
void xy_cords :: get_value(void){
    cout << " x : " <<this->x<<" y : "<< this->y << endl; 
}
int main(){
    xy_cords s1(1.2),s2(2.3);
    s1.get_value(1,2);
    s1.set_value();
    
    return 0;
}