#include <string.h>
#include <stdlib.h>

char *my_strchr(char *str, int ch) {
	while (*str != '\0') {
		if (*str == ch) return str;
		str++;
	}
	return 0;
}


int main(){
}