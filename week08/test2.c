#include <stdio.h>

int main() {
    int total = 0; //int เรื่มต้นเป็น 0

    // loop i ตั้งแต่ 1 ถึง 3
    // loop j เริ่มที่ 0 (เมื่อ i = 1, j จะวน 0 ครั้ง, เมื่อ i = 2, j จะวน 0 และ 1, เมื่อ i = 3, j จะวน 0, 1 และ 2)

    for(int i = 1; i<=3 ; i++) {
        for(int j = 0; j < i; j++) {
            total += i + j;
        
    }
    printf("Total: %d\n", total);
    return 0;
}