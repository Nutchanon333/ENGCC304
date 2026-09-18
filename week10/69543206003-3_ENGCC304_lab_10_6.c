#include <stdio.h>

int main() {
    int arr[4];
    int temp;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}