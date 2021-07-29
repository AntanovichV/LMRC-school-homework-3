#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int lib_toupper(int s){

  if (s >= 97 && s <= 122) return s - 32;
     return s;
  
}

int main() {

    int s1 = 'Y';
    int s2 = 'd';
    int a = toupper(s1);
    int b = lib_toupper(s1);
    int c = toupper(s2);
    int d = lib_toupper(s2);
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a == b && c == d)
    {
        printf("OK");
    }
    else
    {
        printf("bad");
    }
    return 0;
}
