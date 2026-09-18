#include <stdio.h>

int main() {
    int numbers[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 3; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}