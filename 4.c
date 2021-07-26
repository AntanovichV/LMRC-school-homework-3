#include <string.h>
#include <stdio.h>

char *lib_strcat(char *s1, const char *s2) {
  char* begin = s1;
  while (*s1)
    s1++;
  while(*s1++ = *s2++);
  *s1 = '\0';
  return begin;
}

int main(){
  char string1[]="qwerty";
  char string2[]="ilovec";
  char string3[]="123456";
  char string4[]="78910";
  char * a = strcat(string1, string2);
  char * b = lib_strcat(string1, string2);
  char * c = strcat(string3, string4);
  char * d = lib_strcat(string3, string4);

  if(a == b && c==d){
    printf("ok");
  }else{
    printf("bad");
  }
  return 0;
}