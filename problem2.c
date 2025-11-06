#include<stdio.h>
int main(){
// WAP to print the factorial of first n numbers;
int n,fact = 1;
printf("enter any number :");
scanf("%d",&n);
for(int i = 1;i <=n;i++)
    {fact = fact*i;
    printf("FACTORIAL = %d\n",fact);}

return 0;

}