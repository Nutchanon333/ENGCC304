#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char tool[50];
    scanf("%s", tool);
    printf("Tool: %s\n", tool);
    printf("Use it well!\n");
    return 0;
}