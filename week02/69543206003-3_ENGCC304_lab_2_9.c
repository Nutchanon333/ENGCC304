#include <stdio.h>

int main() {
    int price, quantity, total;

    scanf("%d %d", &price, &quantity);

    total = price * quantity;

    printf("Total price = %d\n", total);

    return 0;
}