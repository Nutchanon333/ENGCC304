#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char course[50];
    char language[50];
    scanf("%s %s", course, language);
    printf("Course: %s\n", course);
    printf("Language: %s\n", language);
    printf("Week: 1\n");
    return 0;
}