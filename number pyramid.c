#include<stdio.h>
int main(){
/*
       1
     1 2 3
   1 2 3 4 5
 1 2 3 4 5 6 7
print the given pattern ?
*/
int n ;
printf("enter number of lines:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2 !=0)
        {for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
                printf(" %d",k);
        }
    printf("\n");}
}
return 0;
}