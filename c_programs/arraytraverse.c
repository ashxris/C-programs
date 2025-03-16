#include <stdio.h>
int main() {
    int aadhar[5];        // Array to store 5 integers (Aadhaar numbers)
    int *ptr = aadhar; // Pointer to the first element of aadhar

    // Input
    for (int i = 0; i < 5; i++) {
        printf("%d index: ", i); // Prompt for index
        scanf("%d", &aadhar[i]);  // Read integer and store at ptr + i
    }

    // Output
    for (int i = 0; i < 5; i++) {
        printf("%d index = %d\n", i, *(&aadhar[i])); // Print index and value at ptr + i
    }

    return 0;
}
