#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}