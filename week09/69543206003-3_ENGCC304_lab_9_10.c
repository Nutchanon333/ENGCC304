#include <stdio.h>

int main() {
    int num[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++) {
        sum += num[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}