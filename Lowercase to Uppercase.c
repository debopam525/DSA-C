#include <stdio.h>
#include <ctype.h>
main()
{
    char letter[80];
    int count, tag;
    for (count=0;(letter[count]=getchar())!='\n';++count);
    tag=count;
    for (count=0;count<tag;++count)
    putchar(toupper(letter[count]));
}