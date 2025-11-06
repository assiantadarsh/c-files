#include<stdio.h>
int main(){
int x;
printf("enter x:");
scanf("%d",&x);
char ch = (char)x;//this is type casting
printf("%c",ch);
return 0;
}