#include <stdio.h>

// Program to demonstrate pointers in C

int main() {
    int number = 42;     // Declares a regular integer variable
    int *ptr = &number;  // Pointer stores the address of number

    printf("Value of number: %d\n", number); // Prints 42
    printf("Address of number: %p\n", ptr); // Prints the address of number
    printf("Value at address: %d\n", *ptr); // Prints the value of number using the pointer (42)

    return 0;
}

