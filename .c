#include<stdio.h>
int main(){
    // print sum of 1 -2 3 -4 ----------n= sum
    // method 2
int n;

printf("enter number :");
scanf("%d",&n);
if(n==0)
    printf("sum =%d",0);
else if(n%2==0)
    printf("sum = %d",-n/2);
else
    printf("sum= %d",-n/2+n);









} 