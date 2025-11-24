#include<stdio.h>
int main()
    /*
    find the maximum value out of all the elements 
    in the array ?
    */
    {
    int size ;
    printf("enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter element of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max <arr[i]){
            max = arr[i];
        }
    }
    printf("maximum number of array :%d ",max);
    return 0;
}