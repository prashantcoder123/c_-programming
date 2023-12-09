#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    float n, i, j, t,s;
    printf("enter the size of fish\n");
    scanf("%d",&n);
    n=n+14;
    s=n/10;
    t=4.72;
    for(j=floor(s);j>=-ceil(s);j--){
        for(i=0;i<=4;i=i+t){
if((j<s/2&&j>s/4&&i<1&&i>0.8||j==0&&i<0.6)||(pow(j/s,2)>=pow(sin(i),2))){
    printf(" ");
}
else{
    printf("*");
}
        }
        printf("\n");
    }
    getch();
}