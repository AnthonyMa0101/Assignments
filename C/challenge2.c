#include <stdio.h>
#include <string.h>

int main() {
	char *str;
	int a;
	printf("Type a word and I'll tell you how many characters you typed\n");
	scanf("%s", str);
	a = strlen(str);
	printf("You typed a word with %d characters", a);
	
	return 0;
}
