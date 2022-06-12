#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

void initStudentsFromTxt(char *filename) {
    
}

void writeFile(char *filename, char *str) {
    FILE *fp = fopen(filename, "w");
    fprintf(fp, "%s\n", str);
    fclose(fp);
}

void readFile(char *filename) {
    char buffer[20];
    FILE *fp = fopen(filename, "r");

    fgets(buffer, sizeof(buffer), fp);

    printf("%s\n", buffer);
    fclose(fp);
}

int main(void) {
    char *name = "temp.txt";
    writeFile(name, "Start lol");
    readFile(name);
    return 0;
}
