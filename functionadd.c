#include<stdio.h>
int sum(int a, int b);

int main(){
    int x,y;
    printf("enter x and y");
    scanf("%d%d",&x,&y);
    int s=sum(x,y);
    printf("sum is %d",sum(x,y));
    return 0;
}
int sum(int a,int b){
    return a+b;
}