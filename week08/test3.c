#include <stdio.h>

int main() {
    int total = 0;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) { 
            if ((i + j) % 2 == 0) {
                total += i * j;        
            } else {
                total -= j;           
            }
        }
    }

    printf("%d\n", total);            
    return 0;
}