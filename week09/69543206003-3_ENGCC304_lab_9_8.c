#include <stdio.h>

int main() {
    int scores[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (scores[i] > 50) {
            count++;
        }
    }
    
    printf("Count = %d\n", count);

    return 0;
}