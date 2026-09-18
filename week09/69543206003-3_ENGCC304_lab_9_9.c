#include <stdio.h>

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("First = %d\n", numbers[0]);
    printf("Last = %d\n", numbers[4]);

    return 0;
}