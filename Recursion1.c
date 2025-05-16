#include<stdio.h>
int func(int x[], int n)
{
    if(n==1)
    return x[0];
    else
    return (x[n-1]+func(x, n-1));
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = func(arr, n);
    printf("Sum of the array elements is: %d\n", sum);
    return 0;
}