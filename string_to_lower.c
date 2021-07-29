#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *string_to_lower(char *s) {

  int s_len = strlen(s);
  char* temp = (char*)malloc(s_len+1);

    for(int i = 0; i < s_len; i++) {
        temp[i] = tolower(s[i]);
    }

  temp[s_len]='\0';

  return temp;
}
int main(){
  char * s1 = "QWERTYUIOP";
  char * s2 = "aSdfGjkl";

  const char *a = string_to_lower(s1);
  const char *b = string_to_lower(s2);

  printf("%s", a);
  printf("%s", b);
  
}

