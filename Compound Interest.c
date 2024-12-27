#include <stdio.h>
#include <math.h>
main()
{
    float p,r,n,i,f;
    printf("Enter the Principal: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the number of years: ");
    scanf("%f", &n);
    i=r/100;
    f=p*pow((1+i),n);
    printf("\nThe final value (F) is: %.2f\n", f);
    printf("CI = " , f-p);
}