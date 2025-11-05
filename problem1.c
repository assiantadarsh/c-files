#include<stdio.h>
int main(){
    // print sum of 1 -2 3 -4 ----------n= sum
int n,sum;
printf("enter number :");
scanf("%d",&n);
sum = 0;
for(int i=1; i<=n;i++){
    if(i%2!=0) sum = sum + i;
    else sum = sum - i;
}
printf("%d ",sum);
    return 0;
}