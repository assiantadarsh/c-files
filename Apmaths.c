#include<stdio.h>
int main(){
//problem - 1,3,5,7 ----- upto n terms using mathematics
int n ;
printf("enter any number :");
scanf("%d",&n);
for(int i = 1 ; i <= 2*n-1;i = i + 2)
    printf("%d ",i);

return 0;

}