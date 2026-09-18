#include <stdio.h>

int main() {
    int numbers[5];
    int target;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}