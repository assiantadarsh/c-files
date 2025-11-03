#include<stdio.h>
int main(){
//problem - 1,3,5,7 ----- upto n terms using without mathematics:
int n ;
printf("enter any number :");
scanf("%d",&n);
int a = 1;
for(int i = 1 ; i <=n ;i++)
    {printf("%d ",a);
    a = a+2;}

return 0;

}