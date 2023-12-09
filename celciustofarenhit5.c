#include<stdio.h>
float converttemp(float celcius);
int main(){
  float celcius;
  printf("enter celcius");
  scanf("%f",&celcius);
  printf("celcius is %f",converttemp(celcius));
  
    return 0;
}
float converttemp(float celcius){
    float far=(1.8*celcius)+32;
    return far;
}