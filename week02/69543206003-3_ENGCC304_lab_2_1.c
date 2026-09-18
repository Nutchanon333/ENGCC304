#include <stdio.h>

int main() {
    char id[50];
    char name[50];
    int age;

    scanf("%s", id);
    scanf("%s", name);
    scanf("%d", &age);

    printf("Student ID: %s\n", id);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}