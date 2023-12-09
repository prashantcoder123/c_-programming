#include<stdio.h>
int swap(int a,int b);
int main(){
    int a=10,b=20;
    swap(a,b);
    return 0;
}
int swap(int a,int b){
    int temp;
    temp=a+b;
    b=temp-b;
    a=temp-b;
    printf("after swapping a is %d and b is %d",a,b);
}