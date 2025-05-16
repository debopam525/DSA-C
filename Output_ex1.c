#include<stdio.h>
int funct1(int count);
int main()
{
    int a, count;
    for(count=1; count<=5; ++count)
    {
        a=funct1(count);
        printf("%d  ", a);
    }
    return 0;
}
int funct1(int x)
{
    int y;
    y=x*x;
    return (y);
}