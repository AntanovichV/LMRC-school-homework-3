#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *lib_strcat(char *s1, const char *s2)
{
  size_t i, j;
  for (i = 0; s1[i] != '\0'; i++)
    ;
    for (j = 0; s2[j] != '\0'; j++)
      s1[i + j] = s2[j];

  s1[i + j] = '\0';

  return s1;
}

void main()
{
  char *string1 = "ilovec";
  const char *string2 = "verymuch";
  char *string3 = "123456";
  const char *string4 = "78910";

  const int s1_l = strlen(string1);
  const int s2_l = strlen(string2);
  const int s3_l = strlen(string3);
  const int s4_l = strlen(string4);

  char *s1 = (char*)malloc(s1_l+s2_l+1);
  char *s3 = (char*)malloc(s3_l+s4_l+1);

  strcpy(s1, string1);
  strcpy(s3, string3);


  char *a = strcat(s1, string2);
  char *b = lib_strcat(s1, string2);
  
  char *c = strcat(s3, string4);
  char *d = lib_strcat(s3, string4);

  if (strcmp(a, b) == 0 && strcmp(c, d) == 0){
    printf("finally");
  } else {
    printf("bad");
  }
  free(s1);
  free(s3);
}