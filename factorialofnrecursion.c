#include<stdio.h>
int fact(int n);
int main(){
 int n;
  printf("enetr number:");
  scanf("%d",&n);
  printf("factorial is %d\n",fact(n));

    return 0;
}
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    
int factnm1=fact(n-1);
int fact=factnm1*n;
return fact;
}