#include<stdio.h>
#include<string.h>
int main()
{
    char a[40], b[40], c[40];
    int pos=0, i=0;
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("\n Enter the sub string: ");
    scanf("%s", b);
    printf("\n Enter insertion position: ");
    scanf("%d", &pos);
    int la= strlen(a);
    int lb= strlen(b);
    int lc=la+lb;
    for(i=0; i<pos; i++)
    {
        c[i]=a[i];
    }
    int j=0;
    for(i=pos;i<pos+lb;i++)
    {
        c[i]=b[j];
        j++;
    }
    for (i=pos+lb; i<lc; i++)
    {
        c[i]=a[pos];
        pos++;
    }
    c[i]='\0';
    printf("\n The final string is: %s", c);
    printf("\n");
    return 0;
}