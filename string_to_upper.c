#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *string_to_upper(char *s) {

  int s_len = strlen(s);
  char* temp = (char*)malloc(s_len+1);

    for(int i = 0; i < s_len; i++) {
        temp[i] = toupper(s[i]);
    }

  temp[s_len]='\0';

  return temp;
  
}
int main(){
  char * s1 = "qwertyuiop";
  char * s2 = "aSdfGjkl";

  const char *a = string_to_upper(s1);
  const char *b = string_to_upper(s2);

  printf("%s", a);
  printf("%s", b);
}

