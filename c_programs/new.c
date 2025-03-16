#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Natural numbers from 1 to %d and back: \n", n);

    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("%d \n", i);       // Forward printing

        if (i <= n) {          // Avoid printing an extra space after the last number
            printf("%d \n", n - i + 1); // Reverse printing (n-i+1 gives the reverse number)
        }
    }

    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}