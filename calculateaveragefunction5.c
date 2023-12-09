#include<stdio.h>
float  average(float maths,float science,float sanskrit);

int main(){
 float maths=87;
    float science=78;
      float sanskrit=45;
    printf("average is %f",average(maths,science,sanskrit));
    return 0;
}
float  average(float maths,float science,float sanskrit) {
return (( maths, science, sanskrit)/3);

}


