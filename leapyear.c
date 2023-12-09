#include<stdio.h>
int main(){
    int year ;
    printf("enter year: ");
    scanf("%d",&year);
    //1200 1600 2000 2012 2016.....
    if (year%400==0||year%4==0&&year%100!=0)
    {
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    
    return 0;
}