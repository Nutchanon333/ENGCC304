#include <stdio.h>

int main() {
    int num1, num2, choice;
    scanf("%d %d", &num1, &num2);
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", num1 + num2);
            break;
        case 2:
            printf("Result = %d\n", num1 - num2);
            break;
        case 3:
            printf("Result = %d\n", num1 * num2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}