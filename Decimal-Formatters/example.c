#include <stdio.h>

int main() {
    int number1, number2;

    // Using %d to read an integer
    printf("Enter a number with %d: ");
    scanf("%d", &number1);

    // Using %i to read an integer
    printf("Enter a number with %i (try different bases like decimal, octal with a leading 0, or hexadecimal with 0x): ");
    scanf("%i", &number2);

    // Print the results
    printf("\nNumber read with %%d: %d", number1);
    printf("\nNumber read with %%i: %d\n", number2);

    return 0;
}
