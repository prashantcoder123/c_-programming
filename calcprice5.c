#include<stdio.h>
float finalprice(float value);
int main(){
    float value=100.00;
    finalprice(value);
    printf("value is %f\n",value);
    return 0;
}
float finalprice(float value){
    value=value+(0.18*value);
    printf("price is %f\n",value);
}