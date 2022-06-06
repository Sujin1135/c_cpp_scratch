#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

void writeFile(char *str) {
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "%s\n", str);
    fclose(fp);
}

int main(void) {
    writeFile("Start");
    return 0;
}
