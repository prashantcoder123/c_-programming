#include<stdio.h>
int main(){
    for (int i = 0; i < 15; i++)
    {
        if (i==9)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}