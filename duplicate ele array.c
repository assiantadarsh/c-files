#include<stdio.h>

//WAP to find a duplicate element from a given array of integers .
// only one element is duplicate .

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i] == arr[j]){
                printf("the duplicate element in this array is :%d and the index is (%d,%d)",arr[i],i,j);
                break;
            }
        }
    }

    return 0;
}