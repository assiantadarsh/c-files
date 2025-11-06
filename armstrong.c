#include<stdio.h>
int main(){
/* WAP to print out all armstrong number between 1 and 500 .IF sum of cubes
of each digit of the number.Is equal to the number itself ,then the number is called an 
Armstrong number.*/
int temp,rem,sum=0;
for(int num=1;num<=500;num++)
    {temp = num;
     sum =0;
    while(temp!=0)
       { rem = temp%10;
        sum = sum +(rem*rem*rem);
        temp = temp/10;}
    if(sum == num)
        printf("%d\n",sum);
    }
return 0;
}