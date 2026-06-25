#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char name[50];
    int age;
    scanf("%s", name);
    scanf("%d", &age);
    printf("My name is %s\n", name);
    printf("I am %d years old.\n", age);
    return 0;
}