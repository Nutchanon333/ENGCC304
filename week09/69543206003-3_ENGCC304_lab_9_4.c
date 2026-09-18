#include <stdio.h>

int main() {
    int numbers[5];
    

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Max = %d\n", max);

    return 0;
}