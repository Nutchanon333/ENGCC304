#include <stdio.h>

int main() {
    char cmd;
    scanf(" %c", &cmd);

    switch (cmd) {
        case 'A':
            printf("Add\n");
            break;
        case 'D':
            printf("Delete\n");
            break;
        case 'U':
            printf("Update\n");
            break;
        default:
            printf("Unknown command\n");
            break;
    }

    return 0;
}