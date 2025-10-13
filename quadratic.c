#include<stdio.h>
#include<math.h>
int main()
{
printf("*******FIND THE ROOTS OF QUADRATIC EQUATION********\n");
float a,b,c,d ,r1,r2 ;
printf("enetr the value of a :");
scanf("%f",&a);
printf("enetr the value of b :");
scanf("%f",&b);
printf("enetr the value of c :");
scanf("%f",&c);
d = b*b - 4 *a *c ;
printf(" d = %f\n ",d);
if (d==0)
  {  printf("\nroot are equal  real\n ");
    r1 = -b/2*a;
    r2 = -b/2*a;
    printf("root 1 %f\n root 2 %f",r1,r2 );
}
else if (d>0)
   { printf("roots are real  different\n ");
    r1 = (-b - sqrt(d))/(2 *a);
    r2 = (-b + sqrt(d))/(2 *a);
    printf("root 1 %f \nand  root 2 %f",r1 ,r2);
   }
else{
    printf("roots are imaginary\n");}



return 0;

}

