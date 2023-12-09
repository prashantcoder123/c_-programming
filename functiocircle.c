#include<stdio.h>
#include<math.h>
float rectangle(float a,float b);
float square(float side);
float circle(float radius);
int main(){
    float a=2.0;
    float b=5.0;
    printf("area is %f\n",rectangle(a,b));

    float side=5;
    printf("area is %f\n",square(side));

    float radius =2;
    printf("area is %f\n",circle(radius));
    return 0;
}

float rectangle(float a,float b){
    return a*b;
}
float square(float side){
    return side*side;
}
float circle(float radius){
    return 3.14*radius*radius;
}