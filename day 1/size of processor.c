#include <stdio.h>

int main() {
    // Declare a pointer and use size of to get its  size
    int *ptr_int;
    char *ptr_char;
    double *ptr_double;

    // Printing the size of pointers
    printf("Size of pointer to int: %zu bytes\n", sizeof(ptr_int));
    printf("Size of pointer to char: %zu bytes\n", sizeof(ptr_char));
    printf("Size of pointer to double: %zu bytes\n", sizeof(ptr_double));

    // Check if the system is 32-bit or 64-bit based on pointer size
    if (sizeof(ptr_int) == 8) {
        printf("This is a 64-bit system.\n");
    } else if (sizeof(ptr_int) == 4) {
        printf("This is a 32-bit system.\n");
    } else {
        printf("Unknown system architecture.\n");
    }

    return 0;
}
