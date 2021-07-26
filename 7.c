#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *lib_strcpy(char *s1, char *s2) {
  int i = 0;            
  while(s1[i] !='\0');{  
  s2[i] = s1[i];
  i++; 
  } 
  s2[i] = '\0';
  return s2;   
}
int main(){
  char * str1="qwerty";
  char * str2 = (char*)malloc(strlen(str1)+1);
  char * str3="asdfghjkl";
  char * str4 = (char*)malloc(strlen(str3)+1);
  const char *a = stpcpy(str1, str2);
  const char *b = lib_strcpy(str1, str2);
  const char *c = stpcpy(str3, str4);
  const char *d = lib_strcpy(str3, str4);

  if(a == b && c == d){
    printf("ok");
  }else{
    printf("bad");
  }
  free(str2);
  return 0;
}