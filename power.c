#include<stdio.h>
int main(){
/* Two numbers are entered through the key board .Write a program to
   find the value of one number raised to the power of another*/
int a,b,power = 1;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
for(int i =1;i<=b;i++)
    {power = power*a;
    
    }
printf("%d",power);
return 0;
}