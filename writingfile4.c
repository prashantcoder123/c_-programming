#include<stdio.h>
int main(){
    FILE *fptr=fopen("testnew.txt","w");
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');
    return 0;
}