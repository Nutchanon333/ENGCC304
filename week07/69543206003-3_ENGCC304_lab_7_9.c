#include <stdio.h>

int main() {
    int a, b, menu;
    scanf("%d %d", &a, &b);
    scanf("%d", &menu);
    if (menu == 1) {
        printf("Result = %d\n", a + b);
    } else if (menu == 2) {
        printf("Result = %d\n", a - b);
    } else {
        printf("Invalid\n");
    }
    return 0;
}