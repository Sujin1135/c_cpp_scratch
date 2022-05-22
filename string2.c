#include <stdio.h>
#include <string.h>

char* getWordsFromWord(char *word, char *target) {
	return strstr(target, word);
}

char* concatStr(char *a, char *b) {
	char c[sizeof(a) + sizeof(b)];
	strcpy(c, a);
	return strcat(c, b);
}

int main(void) {
	char *a = "Hello World";
	printf("length is %d\n", strlen(a));
	printf("at 1 index = %c\n", a[1]);
	printf("at 5 index = %c\n", a[7]);
	printf("at start %s\n", getWordsFromWord("love", "I love you"));
	printf("concat each strings is %s\n", concatStr("I ", "love"));
	return 0;
}
