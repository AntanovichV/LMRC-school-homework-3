#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>


int lib_isascii(int s)
{
  if (s >= 0 && s <= 127) return 1;

  return 0;
  
}

int main()
{

    char s1 = 'y';
    int s2 = 12;
    int a = isascii(s1);
    int b = lib_isascii(s1);
    int c = isascii(s2);
    int d = lib_isascii(s2);
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a == b && c == d)
    {
        printf("wonderful");
    }
    else
    {
        printf("bad");
    }
    return 0;
}