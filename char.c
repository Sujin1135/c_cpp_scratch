#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	char c;
	
	scanf("%d", &a);
	printf("%d\n", a);

	// 아래 2 라인을 차지하고 있는 로직들은
	// 버퍼에 담겨있는 파일의 끝이나 개행문자를 모두 처리하기 위함
	int temp;
	while ((temp = getchar()) != EOF && temp != '\n') { }
	
	scanf("%c", &c);
	printf("%c\n", c);
	return 0;
}
