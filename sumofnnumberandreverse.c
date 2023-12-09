#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
int sum=0;
for ( int i = 0; i <= n; i++)
{
    
    sum+=i;
}
printf("%d\n",sum);

for (int j = n; j>=1 ;j--)
{
    printf("%d\n",j);
}


    return 0;
}