#include <stdio.h>

int main() {
    int a, b, menu;
    scanf("%d %d", &a, &b);
    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        default:
            printf("Invalid\n");
            break;
    }
    return 0;
}