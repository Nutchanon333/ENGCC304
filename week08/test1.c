#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    printf("Trace: \n");
    for(i = 1; i < 5; i++) {
        printf("Trace i = %d ", i);
        printf("Trace sumbefore = %d ", sum);
        sum = sum + i;
        printf("Trace sumafter = %d\n", sum);
    }

    printf("\nSum: %d", sum);

    return 0;1
}