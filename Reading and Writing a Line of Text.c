#include <stdio.h>
main()
{
    char line[80];
    scanf("%[^\n]", line);
    printf("%s", line);
}