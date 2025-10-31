#include<stdio.h>
int main()
{
// factorial of given number  
int i;
printf("enter i value:");
scanf("%d", &i);
int fact = 1;
while(i>0){
    fact = fact*i;
    i--;
   }
 printf("FACTORIAL = %d\n",fact);
return 0;

}