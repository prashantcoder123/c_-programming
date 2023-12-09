#include<stdio.h>
int func1(int array[]);
int main(){
    int array[]={3,4,5,};
    
     printf("the value at 0 index is %d\n",array[0]);
    func1(array);
    printf("the value at 0 index is %d\n",array[0]);
    return 0;
}
int fucn1(int array[]){
    for (int i = 0; i <=1; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
    
}