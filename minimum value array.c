#include<stdio.h>
int main()
    /*
    find the minimum value out of all the elements 
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
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(min >arr[i]){
            min = arr[i];
        }
    }
    printf("minimum number of array :%d ",min);
    return 0;
}