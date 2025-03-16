#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr points to the first element of arr

    printf("Address of arr[0]: %p\n", &arr[0]); // or just arr
    printf("Address of arr[1]: %p\n", &arr[1]);
    printf("Address of arr[2]: %p\n", &arr[2]);

    printf("Value of ptr: %p\n", ptr);
    printf("Value of ptr + 1: %p\n", ptr + 1);  // ptr moves by sizeof(int)
    printf("Value of ptr + 2: %p\n", ptr + 2);

    printf("Value at ptr: %d\n", *ptr);        // 10
    printf("Value at ptr + 1: %d\n", *(ptr + 1)); // 20
    printf("Value at ptr + 2: %d\n", *(ptr + 2)); // 30

    return 0;
}