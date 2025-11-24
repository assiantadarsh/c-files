#include<stdio.h>
int main(){
    int size ;
    printf("enter the size of array :");
    scanf("%d",&size);
    int sum =0;
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter alement %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    printf("the sum of array elements:%d",sum);
    return 0;
}