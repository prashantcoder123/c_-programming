#include<stdio.h>
int table(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    table(n);
    return 0;
}
int table(int n){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*n);
    }
    
}