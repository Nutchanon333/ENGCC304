#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a;
    scanf("%d", &a);
    if (a >= 10 && a <= 20 )
    {
        printf("In Range");
    }
    else
    {
        printf("Out of Range");
    }
    return 0;
}