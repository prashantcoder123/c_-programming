#include<stdio.h>
int fab(int n);
int main(){
    int n;
    printf("enetr number:");
    scanf("%d",&n);
    printf("fabinonaci is %d",fab(n));
    return 0;
}
int fab(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
int fabNM1=fab(n-1);
int fabNM2=fab(n-2);
int fabN=fabNM1+fabNM2;
return fabN;
}