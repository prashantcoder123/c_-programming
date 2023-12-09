#include<stdio.h>
struct employe{
    int id;
    float marks;
};
int main(){
struct employe  e1;
e1.id=3;
e1.marks=7.6;


printf("id is %d\n",e1.id);
printf("marks is %f\n",e1.marks);
     return 0;
}