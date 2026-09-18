#include <stdio.h>

int main() {
    int num;

    do {
        scanf("%d", &num);
    } while (num <= 0);

    printf("Accepted = %d\n", num);

    return 0;
}