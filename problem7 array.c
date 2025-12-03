#include<stdio.h>
int main(){
/*
WAP to copy the contents of one array into another in 
the reverse order .
*/
int arr[5] = {2,4,5,6,7};
int brr[5];
for(int i=4;i>=0;i--){
    brr[i]=arr[i];
    printf("%d ",brr[i]);
}
return 0;
}