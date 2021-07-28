#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int lib_isalpha(int s)
{
    if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
        return 1;
    else
        return 0;
}

int main()
{

    char s1 = 'y';
    char s2 = '1';
    int a = isalpha(s1);
    int b = lib_isalpha(s1);
    int c = isalpha(s2);
    int d = lib_isalpha(s2);
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a != 0 && b == 1 && c == d)
    {
        printf("beautiful");
    }
    else
    {
        printf("bad");
    }
    return 0;
}