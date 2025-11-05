#include<stdio.h>
int main(){
// WAP to print sum of all the even digits of a given number ?
int n,ld,sum;
sum = 0;
printf("enter any number:");
scanf("%d", &n);
if(n==0)
    sum =0;
else
    while(n!=0)
    {   ld = n %10;
        if(ld%2 == 0)
            sum= sum + ld;
             
        n = n/10;
        
        
    }
printf("%d",sum);
    
   return 0; 
}