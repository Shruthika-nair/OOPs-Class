#include <iostream>
using namespace std;
class xy_cords{
    private:
        float x;
        float y;
    public:
        void set_value(float a1,float a2);
        void get_value (void);
    

};
void xy_cords :: set_value(float a1, float a2){
    this->x =a1;
    this->y = a2;
};
void xy_cords :: get_value(void){
    cout << " x : " <<this->x<<" y : "<< this->y << endl; 
}
int main(){
    
    return 0;
}