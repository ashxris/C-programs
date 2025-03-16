#include <stdio.h>
void modifyValue(int num) {
    num = num * 2; // Modifies the *copy* of num
    printf("Inside function: num = %d\n", num); // Output: Inside function: num = 20
}

int main() {
    int x = 10;
    modifyValue(x); // x is passed by value
    printf("Outside function: x = %d\n", x); // Output: Outside function: x = 10 (x remains unchanged)
    return 0;
}