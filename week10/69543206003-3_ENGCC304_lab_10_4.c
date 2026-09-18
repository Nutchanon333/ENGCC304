#include <stdio.h>

int main() {
    int a, b;
    int small, large;

    scanf("%d %d", &a, &b);

    if (a < b) {
        small = a;
        large = b;
    } else {
        small = b;
        large = a;
    }

    printf("Small = %d\n", small);
    printf("Large = %d\n", large);

    return 0;
}