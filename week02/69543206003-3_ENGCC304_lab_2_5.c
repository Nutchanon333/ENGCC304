#include <stdio.h>

int main() {
    int width, length, perimeter;

    scanf("%d %d", &width, &length);

    perimeter = 2 * (width + length);

    printf("Perimeter = %d\n", perimeter);

    return 0;
}