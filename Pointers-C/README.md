# Understanding Pointers in C Programming

This README explains the basic concepts of pointers in C programming, particularly focusing on the differences between `a`, `*a`, and `&a` through a detailed example.

## Pointer Basics

Pointers are variables that store memory addresses of other variables. They are one of the fundamental aspects of C programming, allowing for efficient and dynamic memory management.

### Key Concepts

- **Pointer Declaration**:
  - `int* a;` - Declares `a` as a pointer to an integer. `a` will hold the address of an integer.

- **Dereferencing**:
  - `*a = 12;` - Sets the integer at the memory location pointed to by `a` to 12. This is valid only if `a` is initialized to point to a valid memory address.

- **Address of Operator**:
  - `&a` - Returns the memory address of the pointer variable itself, not the location it points to.

## Detailed Example

Here's a detailed example with memory allocation and a function to swap two pointers:

```c
#include <stdio.h>
#include <stdlib.h>

void swap(int** x, int** y) {
    int* temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int* a = malloc(sizeof(int));  // Allocate memory for an integer and assign the address to 'a'
    *a = 12;                       // Set the value at the memory 'a' points to, to 12
    int* b = malloc(sizeof(int));  // Allocate memory for another integer and assign the address to 'b'
    *b = 3;                        // Set the value at the memory 'b' points to, to 3

    // Print values and addresses before swap
    printf("\na: %d  \tb: %d\t --> &a: %p \t &b: %p\t --> a: %p \t b: %p ",
           *a, *b, (void *)&a, (void *)&b, (void *)a, (void *)b);

    swap(&a, &b); // Swap the pointers 'a' and 'b'

    // Print values and addresses after swap
    printf("\na: %d  \tb: %d\t --> &a: %p \t &b: %p\t --> a: %p \t b: %p ",
           *a, *b, (void *)&a, (void *)&b, (void *)a, (void *)b);

    free(a); // Free the allocated memory
    free(b); // Free the allocated memory
    return 0;
}
```

### Explanation

- `*a` and `*b` - The values at the addresses stored in `a` and `b`.
- `&a` and `&b` - The addresses of the pointer variables themselves.
- `a` and `b` - The addresses where the integers are stored.

The `swap` function in this example exchanges the pointers `a` and `b`, changing which integers the pointers reference. The actual addresses where `a` and `b` themselves are stored do not change.



## Another Example

```c
 int num = 10;
    int *ptr = &num;

    // Print the memory address of 'ptr' using %p
    printf("num : %d \n&num: %d\nptr: %%d  -> %d \t %%p --> %p\n&ptr: %d\n*ptr: %d\nMemory address of 'ptr': %p\n", num, &num, ptr, ptr, &ptr, *ptr, (void *)ptr);

```

Output:
```
num : 10 
&num: 1795829924
ptr: %d  -> 1795829924   %p --> 0x16b0a30a4
&ptr: 1795829912
*ptr: 10
Memory address of 'ptr': 0x16b0a30a4
```

