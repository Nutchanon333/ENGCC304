#include <stdio.h>

int main() {
    int signal;
    scanf("%d", &signal);

    switch (signal) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Unknown signal\n");
            break;
    }

    return 0;
}