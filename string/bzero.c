#include <string.h>




int main() {
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	bzero(str, 7);
	puts(str);
	return 0;
}

