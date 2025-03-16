#include <stdio.h>

long long fibonacci(int n) { // Use long long
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
   }

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i <n; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}