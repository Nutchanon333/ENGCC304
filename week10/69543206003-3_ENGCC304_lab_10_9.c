#include <stdio.h>

int main() {
    int arr[4];
    int temp;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("First = %d\n", arr[0]);
    printf("Last = %d\n", arr[3]);

    return 0;
}