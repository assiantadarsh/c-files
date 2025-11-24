#include<stdio.h>
int main(){
/*
find the diffrence between the sum of elements at even indices to
the sum of elemnts at odd indices.
solve the problem ?
*/
int size;
printf("enter the size of array :");
scanf("%d",&size);
int arr[size] ;
for(int i =0;i<size;i++){
    printf("the number of element %d: ",i+1);
    scanf("%d",&arr[i]);
}
int sum1 = 0,sum2=0;
for(int i=0;i<size;i++){
    if(i%2==0){
        sum1 = sum1 + arr[i];
    }
    else{
        sum2= sum2+arr[i];
    }
}
printf("the sum of all even indices : %d",sum1);
printf("\nthe sum of all odd indices : %d",sum2);

int diffrence_sum = sum1-sum2;
printf("\nthe diffrence between the sum of even and odd indices :%d",diffrence_sum );


return 0;
}