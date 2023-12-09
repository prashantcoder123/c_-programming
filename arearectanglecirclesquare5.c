#include<stdio.h>
#include<math.h>
int squarearea(int side);
float rectarea(float a,float b);
float circlearea(float radius);
int main(){
    int side =4;
     printf("area is %d\n",squarearea(side));
     float a=4,b=5;
     printf("area is %f\n",rectarea(a,b));
     float radius =5;
     printf("area is %f\n",circlearea(radius));
    return 0;
}
int squarearea(int side){
return side*side;
}
float rectarea(float a,float b){
    return a*b;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
