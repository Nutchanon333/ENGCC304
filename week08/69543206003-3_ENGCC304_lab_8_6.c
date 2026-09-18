#include <stdio.h>

int main() {
    int pass;
    do {
        scanf("%d", &pass);
        if (pass == 1234) {
            printf("Correct\n");
        } else {
            printf("Wrong\n");
        }
    } while (pass != 1234);
    return 0;
}