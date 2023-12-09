#include<stdio.h>
void star(int n);
int main(){
    star(9);
    return 0;
}
void star(int n){
    for(int i=1;i<=n;i++){
        printf("%c",'*');
    }
}