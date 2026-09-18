#include <stdio.h>

int main() {
    int N;
    int i = 0;

    scanf("%d", &N);
    while (i < N) {
        i++; 
        if (i % 2 != 0) {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}