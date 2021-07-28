#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *string_to_camel_case(char *s) {

  int s_len = strlen(s);
  char* temp = (char*)malloc(s_len+1);

  for(int i = 0; i < s_len; i++) {
    if(!(i%2)) temp[i] = toupper(s[i]);

    else temp[i] = tolower(s[i]);
  }

  temp[s_len]='\0';

  return temp;

  free(temp);
}
int main(){
  char * s1 = "QWERTYUIOP";
  char * s2 = "asdfghjkl";
  char * s3 = "zxCBNm";

  const char *a = string_to_camel_case(s1);
  const char *b = string_to_camel_case(s2);
  const char *c = string_to_camel_case(s3);

  printf("%s", a);
  printf("%s", b);
  printf("%s", c);
  
}
