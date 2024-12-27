#include <stdio.h>
main()
{
    int nm count=1;
    float x, average, sum=0;
    printf("How many numbers?");
    scaf("%d", &n);
    while (count<=n)
    {
        printf("x = ");
        scanf("%f", &x);
        sum+=x;
        ++count;
    }
    average=sum/n;
    printf("\nThe average is %f\n", average);
}