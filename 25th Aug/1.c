#include<stdio.h>
#include<string.h>

struct details{
    char str[10];
    int roll_no;
    float marks;

};
void update_marks(struct details *x){
    int i;
    printf("enter the new mark: ");
    scanf("%d",&i);
    x->marks=i;
}
int main(){
    struct details s1= {"sai",89,55.4};

    printf("name: %s roll_no %d marks %.2f ",s1.str,s1.roll_no,s1.marks);
    update_marks(&s1);

    printf("update things: name: %s rollno: %d marks %.2f",s1.str,s1.roll_no,s1.marks);
    return 0;
}