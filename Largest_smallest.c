#include<stdio.h>
int main()
{
    int a[20],n,i, small, large;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    small=a[0];
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("Largest number is = %d\n", large);
    printf("Smallest number is = %d", small);
    return 0;
}