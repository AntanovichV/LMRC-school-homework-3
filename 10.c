#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int lib_tolower(int s){

  if (s >= 65 && s <= 90) return s + 32;
     return s;
  
}

int main() {

    int s1 = 'Y';
    int s2 = 'd';
    int a = tolower(s1);
    int b = lib_tolower(s1);
    int c = tolower(s2);
    int d = lib_tolower(s2);
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    if (a == b && c == d)
    {
        printf("good");
    }
    else
    {
        printf("bad");
    }
    return 0;
}