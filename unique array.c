#include<stdio.h>
#include<stdbool.h>

// Find the unique number in a given array where all the 
// Elements are being repeated twice with one value being unique.

int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // 1,3,2,4,1,2,3;
    }
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        }
        if(flag== false){
            printf("the unique element is %d ",arr[i]);
            break;
        }
    }

    return 0;
}