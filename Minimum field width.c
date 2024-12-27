#include <stdio.h>
main()
{
    int i=12345;
    float x=354.678;
    printf("%3d %5d %8d\n\n", i, i, i);
    printf("%3f %10f %13f\n\n", x, x, x);
    printf ("%3e %13e %16e", x, x, x);
}