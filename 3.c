#include <string.h>
#include <stdio.h>

int lib_strcmp( const char *s1, const char *s2 ) { 
  for (int i = 0; ; i++) {
    if (s1[i] != s2[i]) {
      return s1[i] < s2[i] ? -1 : 1;
    }
    if (s1[i] == '\0') {
      return 0;
    }
  }
}

int main(){
  char string1[]="qwerty";
  char string2[]="qwerty";
  char string3[]="ilovec";
  char string4[]="ilovec";
  int a = strcmp(string1, string2);
  int b = lib_strcmp(string1, string2);
  int c = strcmp(string3, string4);
  int d = lib_strcmp(string3, string4);

  if(a == b && c==d){
    printf("ok");
  }else{
    printf("bad");
  }
  return 0;
}