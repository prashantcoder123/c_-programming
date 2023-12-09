#include<stdio.h>
int main()
{
    int unit;
    float total;
    printf("enter your electricity bir unit");
    scanf("%d",&unit);
    if(unit<=100)
    { 
     total=unit*10;
    }
    else if (unit<=200)
    {
         total=(100*10)+(unit= 100)*20;
    }
    else if(unit<=300)
    {
        total=(100*10)+(100*20)+(unit=200)*30;
    }
    else
    {
         total=(100*10)+(100*20)+(100*30)+(unit=300)*40;
    }
    printf("bill rupees%0.2f",total);
}
    