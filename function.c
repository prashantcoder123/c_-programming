#include<stdio.h>
void hello ();
int main(){
  hello ();
  hello();    //jitna baar function ko call karenge utna baar print hoga.........
    return 0;
}

void hello(){
    printf("hello\n");
}