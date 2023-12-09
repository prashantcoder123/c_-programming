#include<stdio.h>
float converttemp(float celcius);

int main(){

    printf("far is %f",converttemp(47));
return 0;
}

float converttemp(float celcius){
    float far=(1.8*celcius)+32;

    return far;
}