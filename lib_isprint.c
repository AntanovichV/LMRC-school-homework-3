#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>


int lib_isprint(int s)
{
  if (s >= 32 && s <= 126) return 1;

  return 0;
  
}

int main() {

    char s1 = 'y';
    char s2 = '+';
    int a = isprint(s1);
    int b = lib_isprint(s1);
    int c = isprint(s2);
    int d = lib_isprint(s2);

    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a == c && b == d)
    {
        printf("right");
    }
    else
    {
        printf("bad");
    }
    return 0;
}