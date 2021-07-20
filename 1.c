#include <string.h>
char *my_strcpy(char *s1, const char *s2) {
  char *result = s1;            
  while(*s1++ = *s2++);                    // no longer needed since the copy happens before the check now
  return result;   
}