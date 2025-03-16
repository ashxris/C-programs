#include <stdio.h>
int main() {

		int num = 10;
		int *ptr = &num;

		printf("Address of num: %p\n", &num);  // Prints the address of num
		printf("Value of ptr: %p\n", ptr);    // Prints the address stored in ptr (same as &num)
		printf("Value pointed to by ptr: %d\n", *ptr); // Prints the value at the address (10)
		printf("Address of pointer: %p\n", &ptr);  // Prints the address of the pointer itself
		
	return 0;
}