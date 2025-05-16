#include<stdio.h>
int funct1(int n)
{
    if(n>0) return (n+funct1(n-1));
}
int main()
{
    int n=10;
    printf("%d  ", funct1(n));
    return 0;
}