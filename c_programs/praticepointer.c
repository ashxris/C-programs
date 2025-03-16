#include <stdio.h>
int main() {
  int *ptr;
  int x;    

  ptr = &x;  // ptr stores address of x
  *ptr = 0;   // Set value of x to 0 indirectly

  printf("x = %d\n", x);    // Print x
  printf(" *ptr = %d\n", *ptr); // Print value at ptr (x)

  *ptr += 5;  // Add 5 to value at ptr (x)

  printf("x = %d\n", x);    // Print x
  printf(" *ptr = %d\n", *ptr); // Print value at ptr (x)

  (*ptr)++;  // Increment value at ptr (x)

  printf("x = %d\n", x);    // Print x
  printf(" *ptr = %d\n", *ptr); // Print value at ptr (x)

  return 0; 
}