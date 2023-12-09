#include<stdio.h>
int main(){
    do
    {
        int n;
        printf("enter number:");
        scanf("%d",&n);
        if (n%7==0)
        {
            break;
        }
        
    } while (1);
    printf("thankyou");

    return 0;

}