#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *lib_strdup(const char *s)
{
    char *str;
    char *p;
    int len = 0;

    while (s[len])
        len++;
    str = malloc(len + 1);
    p = str;
    while (*s)
        *p++ = *s++;
    *p = '\0';
    return str;
}

int main(){
  const char *string1="qwerty";
  const char *string2="ilovec";
  char *a = strdup(string1);
  char *b = lib_strdup(string1);
  char *c = strdup(string2);
  char *d = lib_strdup(string2);

  if(strcmp(a,b) == 0 && strcmp(c,d) == 0){
    printf("ok");
  }else{
    printf("bad");
  }
  free(a);
  free(b);
  free(c);
  free(d);
  return 0;
}