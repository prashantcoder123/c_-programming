#include<stdio.h>
int main(){
int limit , sum=0;
printf("enter the upper limit");
scanf("%d",&limit);
for(int i=2; i<=limit; i+=2)
{
    sum +=i;
}
{
    printf("the sum of even numbers upto %d is %d",limit,sum);
}
return 0;
}