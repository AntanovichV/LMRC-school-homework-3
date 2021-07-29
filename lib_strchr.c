#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *lib_strchr(const char *str, int s) {

	while (*str != '\0') {
		if (*str == (char)s) return (char*)str;
		str++;
	}
	return 0;
}


int main(){
  const char *string1="qwerty";
  const char *string2="ilikec";
  char s1 = 'y';
  char s2 = 'i';
  char *a = strchr(string1, s1);
  char *b = lib_strchr(string1, s1);
  char *c = strchr(string2, s2);
  char *d = lib_strchr(string2, s2);

  if(a == b && c == d){
    printf("not bad");
  }else{
    printf("now you");
  }
  return 0;
}