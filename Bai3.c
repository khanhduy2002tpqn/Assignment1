#include <stdio.h>
#include <stdlib.h>

void readfile(char* filename, int *a, int *b) {
    FILE* f = fopen(filename, "r");
    if (f == NULL) {
        printf("Cannot open file %s\n", filename);
        return;
    }
    fscanf(f, "%d %d", a, b);
    fclose(f);
    printf("Sum(a, b): %d\n", *a + *b);
    printf("Diff(a, b): %d\n", *a - *b);
}

int main() {
    int a, b;
    readfile("../bai3.txt", &a, &b);

    return 0;
}