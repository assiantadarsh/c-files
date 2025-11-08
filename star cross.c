#include<stdio.h>
int main(){
 /*  *        *
       *    *   
         *    
       *    *  
     *         *
    */
int n ,m;
printf("enter number of rows n:");
scanf("%d",&n);
printf("enter number of column m:");
scanf("%d",&m);
for(int i=1; i<=n; i++)
{   for(int j=1;j<=m;j++)
        if(j==i || i+j==6)
            printf(" * ");
        else
            printf("   ");
    printf("\n");
}
return 0;
}