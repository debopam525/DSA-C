#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("c= ");
    scanf("%f", &c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("\nx1 = %e    x2 = %e",x1,x2);
    return 0;
}