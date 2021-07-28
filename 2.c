#include <string.h>
#include <stdio.h>

int lib_strlen(const char *s) {
int count = 0;
while (*s != '\0') {
    count++;
    s++;
}
return count;
}

int main(){
  const char *string="qwerty";
  const char *string2="asdfghjkl";
  int a = strlen(string);
  int b = lib_strlen(string);
  int c = strlen(string2);
  int d = lib_strlen(string2);

  if(a == b && c==d){
    printf("ok");
  }else{
    printf("bad");
  }
  return 0;
}