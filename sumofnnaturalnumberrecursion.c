#include<stdio.h>
int sum(int n);
int main(){

    printf("sum is %d",sum(9));
    return 0;
}
int sum (int n){
    if (n==1)
    {
        return 1;
    }
    
int sumNM1 = sum(n-1);
int sumn = sumNM1+n;
return sumn;
}
