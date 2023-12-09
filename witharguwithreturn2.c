#include<stdio.h>
int sum(int a,int b);
int main(){
int a=4;
int b=5;
int c;
c=sum(a,b);
printf("sum is %d",c);
    return 0;
}
int sum(int a,int b){
    return a+b;
}