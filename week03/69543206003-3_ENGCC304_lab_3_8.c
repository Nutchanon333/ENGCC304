#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a >= 300 || b >= 1)
    {
        printf("Free Shipping");
    }
    else
    {
        printf("Shipping Required");
    }
    return 0;
}