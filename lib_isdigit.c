#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>


int lib_isdigit(int s)
{
  if (s >= 48 && s <= 71) return 1;

  return 0;
  
}

int main()
{

    char s1 = 'y';
    int s2 = '7';
    int a = isdigit(s1);
    int b = lib_isdigit(s1);
    int c = isdigit(s2);
    int d = lib_isdigit(s2);
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a == b && c != 0 && d == 1)
    {
        printf("result");
    }
    else
    {
        printf("bad");
    }
    return 0;
}