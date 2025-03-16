#include <stdio.h>
void modifyReference(int *numPtr) { // numPtr is a pointer to an int
    *numPtr = *numPtr * 2; // Dereference numPtr and modify the value at that address
    printf("Inside function: *numPtr = %d\n", *numPtr); // Output: Inside function: *numPtr = 20
}

int main() {
    int x = 10;
    modifyReference(&x); // Pass the address of x (using &)
    printf("Outside function: x = %d\n", x); // Output: Outside function: x = 20 (x is changed!)
    return 0;
}