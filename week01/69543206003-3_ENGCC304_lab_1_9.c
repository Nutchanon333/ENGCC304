#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char course[50];
    int week;
    scanf("%s", course);
    scanf("%d", &week);
    printf("Course: %s\n", course);
    printf("Week: %d\n", week);
    return 0;
}