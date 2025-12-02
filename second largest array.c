#include<stdio.h>
/*#include<limits.h>
int main(){

//find the second largest elament in the array 

int arr[5] = {3,5,6,4,3};
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=4;i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
for(int i=0;i<=4;i++){
    if(smax<arr[i] && arr[i] != max){
        smax = arr[i];
    }
}
printf("%d",smax);
return 0;
}*/
//method 2
int main(){
int arr[6] ={-4,-8,-9,-5,2,-10};
int max = arr[0],smax;
for(int i=0;i<=5;i++){
    if(max<arr[i]){
        smax = max;
        max = arr[i];
    }
    else if(smax<arr[i]){
        smax = arr[i];
}
printf("%d",smax);
return 0;
}








