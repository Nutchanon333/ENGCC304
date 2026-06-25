#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int student_id;
    char nickname[50];
    char section[50];
    
    scanf("%d %s %s", &student_id, nickname, section);
    
    printf("Student ID: %d\n", student_id);
    printf("Nickname: %s\n", nickname);
    printf("Section: %s", section);
    
    return 0;
}