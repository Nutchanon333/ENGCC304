#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    scanf("%d", &num);
    while (num != -1) {
        sum += num;
        count++;
        scanf("%d", &num); // รับค่าถัดไป
    }
    if (count > 0) {
        int avg = sum / count; // หาค่าเฉลี่ยแบบจำนวนเต็ม
        printf("Average = %d\n", avg);
    } else {
        printf("Average = 0\n");
    }

    return 0;
}