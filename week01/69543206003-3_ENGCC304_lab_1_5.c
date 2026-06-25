#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char Hardware[50];
    char Software[50];
    scanf("%s %s", Hardware, Software);
    printf("Hardware: %s\n", Hardware);
    printf("Software: %s\n", Software);
    printf("Both work together.\n");
    return 0;
}