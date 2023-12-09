#include<stdio.h>
int main(){
    FILE*fptr=fopen("text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c\n",ch);
    
    return 0;
}