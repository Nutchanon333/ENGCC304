#include <stdio.h>

int main() {
    int menu;
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Price = 10\n");
            break;
        case 2:
            printf("Price = 15\n");
            break;
        case 3:
            printf("Price = 20\n");
            break;
        default:
            printf("Invalid menu\n");
            break;
    }

    return 0;
}