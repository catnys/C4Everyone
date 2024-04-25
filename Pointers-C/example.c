#include <stdio.h>
#include <stdlib.h>

int main() {
    int *decimal = malloc(sizeof(int));   // Pointer for decimal input
    int *any_base = malloc(sizeof(int));  // Pointer for any base input

    // Check if memory allocation failed
    if (decimal == NULL || any_base == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with error
    }

    // Reading integer in decimal format using %d
    printf("Enter a decimal number (using %%d): ");
    scanf("%d", decimal);

    // Reading integer in any format (decimal, octal, hexadecimal) using %i
    printf("Enter a number in any format (decimal, octal with '0', or hexadecimal with '0x' using %%i): ");
    scanf("%i", any_base);

    // Display the results using both %d and %i
    printf("\nNumber read with %%d (as decimal): %d", *decimal);
    printf("\nNumber read with %%i (auto-detected base): %d\n", *any_base);

    // Free allocated memory
    free(decimal);
    free(any_base);

    return 0;
}
