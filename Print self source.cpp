#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen(__FILE__, "r");
    do
    {
        c=fgetc(fp);
        putchar(c);
    }
    while(c!=EOF);
    fclose(fp);
    return 0;
}