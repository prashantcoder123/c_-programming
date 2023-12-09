#include<stdio.h>
int main(){
    FILE *fptr=fopen("std.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf(fptr,"%d",n);
     fscanf(fptr,"%d",&n);
     printf(fptr,"%d",n);
      fscanf(fptr,"%d",&n);
      printf(fptr,"%d",n);
       fscanf(fptr,"%d",&n);
       printf(fptr,"%d",n);
        fscanf(fptr,"%d",&n);
        printf(fptr,"%d",n);
        fclose(fptr);
        return  0;
}