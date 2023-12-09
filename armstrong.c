#include<stdio.h>
int main(){
    int n,temp,r,arm=0;
    
    printf("enter number:");
    scanf("%d",&n);
    temp=n;


while (n>0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;

}
if (temp==arm)
{
    printf("armstrong number");
}
else{

    printf("not armstrong number");
}
return 0;
}
