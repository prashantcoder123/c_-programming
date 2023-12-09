#include<stdio.h>
int main (){
    char a=3;
    char *ptra=&a;
    printf("%p\n",ptra);
    ptra++;
    printf("%p\n",ptra);
    ptra--;
    printf("%p\n",ptra);
     return 0;
}