#include<stdio.h>
int main(){
    int n,r,temp,reverse=0;
    printf("enetr number:");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("reverse is %d\n",reverse);
    if (temp=reverse)
    {
        printf("palindrome number:");
    }
else{
    printf("not palindrome number");
}    
    
    return 0;
}