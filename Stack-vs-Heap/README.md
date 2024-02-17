# Stack vs Heap

## Understanding Main Memory:
Memory is divided into addressable units called bytes, and each byte has a unique address. Addresses are linear, not like a coordinate system (x, y), and they progress in a single dimension. The size of memory can vary, but for the sake of our discussion, we'll assume a 64-kilobyte (KB) main memory.

## Program Memory Usage:
Main memory is divided into three sections: code section, stack, and heap. The code section stores the machine code of the program, and its size depends on the program's requirements.

## Static vs. Dynamic Memory Allocation:
We'll discuss static and dynamic memory allocation. Static memory allocation is when the memory size required by a function is determined at compile time. It's like reserving a specific space in advance for the function's variables. The size is known before the program runs.

---

## Static Memory Allocation Example:

To illustrate static memory allocation, consider a program with two variables, an integer (2 bytes) and a float (4 bytes). These variables need a total of 6 bytes of memory, and this memory is allocated within the stack. The block of memory assigned to the main function is called a stack frame or activation record. The memory allocation is decided at compile time, making it a static memory allocation.


### 1. Memory for Code and Programs:

The code and programs work in the code section of the main memory. This section stores the machine code instructions of the program that the CPU executes. The size of the code section depends on the program's instructions and is determined at compile time.

### 2. Heap:

The heap is a region in the main memory used for dynamic memory allocation. It's used for storing data that doesn't have a predetermined size at compile time. In C and C++ programming, you can allocate and deallocate memory in the heap using functions like malloc, calloc, realloc, and free. The heap is a large, variable-sized pool of memory, and it's managed by the program during runtime.

### 3. Stack:

The stack is another region in the main memory used for function call management and local variable storage. Each function call creates a new stack frame, which stores local variables and function call information. The stack operates in a last-in-first-out (LIFO) fashion, and it's typically smaller and faster to access than the heap. Stack memory is managed automatically by the program.

### 4. Heap vs. Stack:

Heap and stack differ in several aspects:
Allocation: Heap memory is allocated and deallocated explicitly by the programmer, while stack memory is managed automatically.
Size: The size of the heap is variable, while the stack size is fixed at compile time.
Access: Accessing heap memory can be slower due to dynamic allocation, whereas stack memory access is fast.
Lifetime: Variables in the heap can have longer lifetimes, while stack variables are short-lived, tied to the function's scope.

### 5. Segmentation:

Segmentation in computer memory management refers to the division of main memory into different sections, each with its purpose and characteristics. This includes code, stack, and heap segments, as well as potential data and other segments. Segmentation allows for efficient memory usage and security in memory access.

### 6. .obj File:

A .obj file is an object file generated during the compilation of a program's source code. It contains machine code instructions, data, and information needed for linking with other object files to produce the final executable program. Object files are platform-specific and serve as an intermediate step in the compilation process.

### 7. .h File (Header File):

A .h file, often referred to as a header file, contains declarations of functions, variables, and structures used in a program. It is included in source code files to provide information about the external interfaces of a program. Header files help separate interface and implementation and enable modular programming. They are commonly used in C and C++ programming and serve as a reference for the compiler.

--- 


## 1. Stack and Heap:

Suppose you have a C++ program that defines variables in both the stack and the heap:

```cpp
#include <iostream>

int main() {
    // Stack variables
    int x = 10;
    double y = 3.14;

    // Heap variables
    int* p = new int(5);
    double* q = new double(2.71);

    // ...

    delete p;  // Deallocate memory from the heap
    delete q;

    return 0;
}
```
    
In the exapmle above example:

x and y are stack variables because they have a known size at compile time, and their memory is automatically allocated on the stack.
p and q are pointers to dynamically allocated memory on the heap. Memory is allocated and deallocated explicitly using new and delete.

## 2. Static Memory Allocation:

Let's consider a C program with a function using static memory allocation:

```cpp
#include <stdio.h>

void printMessage() {
    static char message[] = "Hello, World!";
    printf("%s\n", message);
}

int main() {
    printMessage();
    return 0;
}
    
```

 In that case:

The message variable is allocated in the data section of memory (a section separate from the stack and heap). It has a fixed size at compile time and is shared across multiple calls to printMessage.

## 3. Segmentation:

Suppose you have a complex C++ program with different memory segments:

```cpp
#include <iostream>

int globalVariable = 42;  // Data segment

int main() {
    // Code section
    int localVar = 7;  // Stack
    int* dynamicVar = new int(99);  // Heap

    // ...

    delete dynamicVar;  // Deallocate memory from the heap

    return 0;
}
  
```  
    
In the example of last but not least `^-^` :

globalVariable resides in the data section, which is separate from the code, stack, and heap.
localVar is a stack variable allocated within the main function's stack frame.
dynamicVar is a heap variable created using new, and it is later deallocated with delete.