#include<stdio.h>
int number();
int main(){
    printf("%d",number());
    return 0;
}
int number(){
    int i;
    printf("enter number:");
    scanf("%d",&i);
    return i;
}