#include<stdio.h>
void finalprice(float value);
int main(){
float value=100.0;
finalprice( value);

return 0;
}
void finalprice(float value){
   value=value+(.18*value);
printf("finalprice is %f",value);
}