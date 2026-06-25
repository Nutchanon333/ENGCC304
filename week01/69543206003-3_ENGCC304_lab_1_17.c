#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char computer[50];
    char user[50];
    scanf("%s %s", computer, user);
    printf("Computer: %s\n", computer);
    printf("User: %s\n", user);
    printf("Login success\n");
    return 0;
}