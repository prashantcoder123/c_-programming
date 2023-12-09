#include<stdio.h>
int main(){

char day ;
printf("enter day(m-S):");   //m-monday't-tues,w-wed...........S-sunday
scanf("%c",&day);
switch (day)
{
case 'm':printf("monday\n");
    break;

case 't':printf("tuesday\n");
break;
case 'w':printf("wednesday\n");
break;
case 'T':printf("thrusday\n");
break;
case 'f':printf("friday\n");
break;
case 's':printf("saturday\n");
break;
case 'S':printf("sunday\n");
break;

default:printf("not avlid day!");

    break;
}

return 0;







}