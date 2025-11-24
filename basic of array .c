#include<stdio.h>
int main(){
int arr[5] = {2,4,6,8,10};
for(int i =0;i<=4;i++)
    {printf("enter index number :%d\n",i);
    scanf("%d",&arr[i]);}
printf("the number is =%d",arr[1]);
 return 0;
}