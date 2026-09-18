#include <stdio.h>

int main() {
    int numbers[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }

    printf("Count = %d\n", count);

    return 0;
}