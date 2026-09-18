#include <stdio.h>

int main() {
    int score, sum = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &score);
        sum += score;
    }
    printf("Average = %d\n", sum / 4);
    return 0;
}