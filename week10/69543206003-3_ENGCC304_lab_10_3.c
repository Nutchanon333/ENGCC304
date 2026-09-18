#include <stdio.h>

int main() {
    int numbers[5];
    int target;
    int position = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            position = i + 1;
            break;
        }
    }

    printf("Position = %d\n", position);

    return 0;
}