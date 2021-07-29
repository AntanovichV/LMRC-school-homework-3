#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *lib_strcpy(char *s1, const char *s2) {
  int i = 0;
  while(s2[i] != '\0'){
    s1[i] = s2[i];
    i++;
  }; 
  s1[i] = '\0';
  return s1;
}
int main(){
  const char *string2 = "qwerty";
  char *string1 = (char*)malloc(strlen(string2)+1);
  const char *string4 = "asdfghjkl";
  char *string3 = (char*)malloc(strlen(string4)+1);
  char * a = strcpy(string1, string2);
  char * b = lib_strcpy(string1, string2);
  char * c = strcpy(string3, string4);
  char * d = lib_strcpy(string3, string4);

  printf("%s", a);
  printf("%s", b);
  printf("%s", c);
  printf("%s", d); 
  
  if(a == b && c == d){
    printf("ok");
  }else{
    printf("bad");
  }
  return 0;
  free(string1);
  free(string3);
}