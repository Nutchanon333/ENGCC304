#include <stdio.h>

int main() {
    int password;

    do {
        scanf("%d", &password);

        if (password != 1234) {
            printf("Wrong\n");
        } else {
            printf("Correct\n");
        }
    } while (password != 1234);

    return 0;
}