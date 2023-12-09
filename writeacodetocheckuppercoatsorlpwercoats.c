#include<stdio.h>
int main(){

char ch;
printf("enter ch:");
scanf("%c",&ch);
if(ch>='A'&& ch<='Z'){
    printf("upper\n");

}
else if(ch='a'&& ch<='z'){

    printf("lower\n");
}

else{
    printf("not a english letter ");
}
return 0;







}