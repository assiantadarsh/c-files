#include<stdio.h>
int main(){

int a[5];
int b[5];
int sum[5];
printf("enter the first array element :");
for(int i=0;i<5;i++)
   { 
    scanf("%d",&a[i]);
}
printf("enter the second aray element :");
for(int i=0;i<5;i++){
    scanf("%d",&b[i]);}

for(int i=4;i>=0;i--)
{
    sum[i]=a[i]+b[i];
    printf("%d ",sum[i]);
}

return 0;}
