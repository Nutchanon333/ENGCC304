#include <stdio.h>

int main() {
    int numbers[5];
    int min;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    min = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Min = %d\n", min);

    return 0;
}