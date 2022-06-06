#include <stdio.h>

FILE writeFile(char *str) {
    FILE *fp = fopen("temp.txt", "w");
    fprintf(fp, "%s\n", str);
    return *fp;
}

int main(void) {
    FILE f = writeFile("Start");
    fclose(&f);
    return 0;
}
