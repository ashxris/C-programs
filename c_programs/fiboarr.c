#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    int fib[n]; // Array to store Fibonacci numbers

    fib[0] = 0; // First Fibonacci number
	fib[1] = 1; // Second Fibonacci number

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calculate the next Fibonacci number
    }

    // Print the Fibonacci numbers
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0; // Successful execution
}