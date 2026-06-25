#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char message[50];
    scanf("%s", message);
    printf("Message: %s\n", message);
    printf("End of program\n");
    return 0;
}