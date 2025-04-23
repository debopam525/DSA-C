#include<stdio.h>
int main(){
    int f,f0,f1,n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    f0=0;
    f1=1;
    printf("Fibonacci series: ");
    for(i=0;i<n;i++){
        printf("%d\t", f0);
        f=f0+f1;
        f0=f1;
        f1=f;
    }
    return 0;
}