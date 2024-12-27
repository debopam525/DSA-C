#include <stdio.h>
main()
{
    int a=0x80ec;
    float b=0.3e-12;
    printf("%4x %10.2e\n\n", a, b);
    printf("%4X %10.2E", a, b);
}