int my_strcmp( const char *s1, const char *s2 ) { 
  for (int i = 0; ; i++) {
    if (s1[i] != s2[i]) {
      return s1[i] < s2[i] ? -1 : 1;
    }
    if (s1[i] == '\0') {
      return 0;
    }
  }
}
int main() {
    const char *s1 = "A";
    const char *s2 = "B";         
}    