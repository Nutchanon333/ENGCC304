#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char name[50];
    char sec[50];
    scanf("%s", name);
    scanf("%s", sec);
    printf("================\n");
    printf("Name: %s\n", name);
    printf("Section: %s\n", sec);
    printf("================\n");
    return 0;
}