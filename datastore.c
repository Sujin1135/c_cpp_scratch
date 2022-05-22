#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a = 5; // 전역 변수 (데이터 영역)

void process(void) {
	static int a = 5; // 정적 변수 (데이터 영역)
	a++;
	printf("current a value is %d\n", a);
}

// 매개변수(a, b) (스택 영역)
int add(int a, int b) {
	return a + b;
}

int main(void) {
	char ch = getchar(); // 동적할당 변수 (힙 영역)
	register int nums[] = { 1, 2, 3, 4, 5 }; // 레지스터 변수 (레지스터 - 컴파일 시 결정되며 레지스터에 저장이 안 될 수도 있음)
	int sum = add(5, 2); // 지역 변수 (스택 영역)
	printf("add result is %d\n", sum);
}
