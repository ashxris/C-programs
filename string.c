#include <stdio.h>

int main() {
    char name[20]; // Make sure you have enough space!
    printf("Enter your name: ");
    scanf("%19s", name); // Limit input to prevent buffer overflow (explained below)
    printf("Hello, %s!\n", name);
    return 0;
}