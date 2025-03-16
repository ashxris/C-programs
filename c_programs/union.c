#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data1;

    data1.i = 10;
    printf("Integer: %d\n", data1.i); // Output: Integer: 10

    data1.f = 3.14; // Overwrites the integer value
    printf("Float: %f\n", data1.f);   // Output: Float: 3.140000
    printf("Integer (after float assignment): %d\n", data1.i); // Output: Integer (garbage value)

    strcpy(data1.str, "Hello"); // Overwrites the float value
    printf("String: %s\n", data1.str);  // Output: String: Hello
    printf("Float (after string assignment): %f\n", data1.f); // Output: Float (garbage value)

    return 0;
}