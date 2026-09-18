#include <stdio.h>

int main() {
    int choice;

    do {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Bye\n");
                break;
            case 0:
                printf("Exit\n");
                break;
            default:
                printf("Invalid\n");
                break;
        }
    } while (choice != 0);

    return 0;
}