#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[51];
} Student;

void printStudent(Student s) {
    printf("학번: %s\n", s.studentId);
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("학과: %s\n", s.major);
    printf("\n");
}

int main(void) {
    Student s = {"1135", "망고", 1, "컴퓨터 공학과"};

    printStudent(s);

    Student *asyncS = malloc(sizeof(Student));
    strcpy(asyncS->studentId, "1315");
    strcpy(asyncS->name, "유수진");
    asyncS->grade = 1;
    strcpy(asyncS->major, "호텔 경영 학과");

    printStudent(*asyncS);
}
