#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    //use xor to swap two values
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    printf("After: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Before: a = %d, b = %d\n", a, b);
    swap(&a, &b);

    return 0;
}