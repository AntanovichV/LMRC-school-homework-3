#include <string.h>
#include <stdio.h>

char *lib_strcpy(char *s1, char *s2) {
  while((*s1++ = *s2++)!='\0');                    // no longer needed since the copy happens before the check now
  return s1;   
}
int main(){
  char string1[]="qwerty";
  char string2[100];
  char * a = stpcpy(string1,string2);
  char * b = lib_strcpy(string1,string2);

  if(a == b){
    printf("ok");
  }else{
    printf("bad");
  }
  return 0;
}