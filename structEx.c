#include "stdio.h"

typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[51];
} Student;

int main(void) {
    Student s = {"1135", "망고", 1, "컴퓨터 공학과"};

    printf("학번: %s\n", s.studentId);
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("학과: %s\n", s.major);
}
