# Week 4: Memory

- Bitmap Image: A grid of bits, 0's and 1's, where 0's represent black and 1's represent white.

- Pixel Art: Customizing individual pixels or square of color to convey images at large.

- Hexadecimal Notation: a code/ way of counting lead by a '#' or '0x' where the code translates to a specific color within the color spectrum(#) or numeric value(0x)
  - 0 1 2 3 4 5 6 7 8 9 A B C D E F --> 16 digits
  - Base 16 --> 256 total values (0 - 255)
  - Useful because we can represent a byte in 2 digits
  - They are represented by '0x' in front of the hexadecimal value

- Operator:
  - &: Address of, tells you the address of something
  - \*: Dereference operator, tells how to get to something

- Pointers: A variable that stores the address of something.
  - %p ==> refernces pointers in `printf`, prints the memory address of the variable
  - Example:
    int n = 50;
    int \*p = &n;

- String
  - strings are not real or part of C(i think most programming languages) instead strings are memory addresses of an array of char
  - How it works:
    - string s = "HI!"
    - whats happening here is that s stores the address of the first character and looks for the nul operator(/0) to determine the end of the string
    - Thus strings can be expressed as char \*s = "HI!"

- Pointer Arithmetic: can perform math on addresses
  - Pointers, or memory address, can be incremented/decremented to go to the next or previous address

- malloc: Memory allocation, a function that lets you pass in a number, how many bytes you want and will return the reserved memory address back to you.
  - NULL is returned when malloc gives an error
  - free: can be called to " free up" that memory

- valgrind: Command line program that allows you to see memory related errors.
  - a programming tool used for memory debugging, memory leak detection and profiling. It primarily helps developers find issues.
    - Memory leaks
    - Invalid Memory Access
      -Etc.

- Passing By Reference/Address: Instead of passing in just the variables for functions that are not accessible in the global scope, you need to provide the **addresses** of those variable so they can be retained globally in the program
  - Example:
    - This doesn't work
    - void swap(int a, int b){
      int temp = a;
      a = b;
      b = temp;
      }
    - swap(x, y);

    - This does:
      -void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
      }
      -swap(&x, &y);

Heap Overflow:

- Stack Overflow: SO many functions are called on to the stack that it goes beyond the capacity of the memory

- Buffer Overflow: Memory overflow or accessing beyond the allocated memory

- File I/O(Input/Output):
  1.fopen
  2.fclose
  3.fprintf 4. fscanf
  5.fread
  6.frwrite 7. fseek
