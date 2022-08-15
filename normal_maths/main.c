#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,sum,sub,af;
    double div,mul;

    printf("Enter the numbers a and b : ");
    scanf("%d %d",&a,&b);
     sum = (a+b);
     sub = (a-b);
     div = (a/b);
     mul = (a*b);

     printf("The summation of a and b is = %d\n",sum);
     printf("The subtraction of a and b is = %d\n",sub);
     printf("The division of a and b is = %.2lf\n",div);
     printf("The multiplication of a and b is = %.1lf\n",mul);
}
