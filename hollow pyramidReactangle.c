#include<stdio.h>
int main(){
    int n;
    int nsp=1;
    // For upper side
    printf("enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        if(i==n){
            for(int u=1;u<=2*n - 1;u++){
                printf("%d",n);
            }
        }
        if(i==1){
            printf("1");
        }
        else{
            printf("%d",i);
            for(int j=1;j<=nsp;j++){
                printf(" ");}
            printf("%d",i);
        }
        printf("\n");
        nsp +=2;
    }
    return 0;
}