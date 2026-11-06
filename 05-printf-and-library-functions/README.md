# Episode 05 · printf and Library Functions

*Printing with the Standard Library*

printf prints text, numbers and characters to the screen. It is a library function declared in stdio.h; the C standard specifies it, and compiler vendors implement it.

**Notes:** [05-printf-and-library-functions.pdf](05-printf-and-library-functions.pdf) (colour PDF, A4)

## Key points

- printf prints the text in double quotes to standard output, usually the screen.
- Placeholders %d, %c and %f print an integer, a character and a floating-point number.
- printf is declared in stdio.h (standard input and output). Without the #include, the build fails.
- The C standard specifies library functions; compiler vendors implement them.

## Code

| File | What it is |
|---|---|
| [`code/hello.c`](code/hello.c) | Program from the video |
| [`code/i-like-c.c`](code/i-like-c.c) | Program from the video |
| [`code/mistakes/no-include.c`](code/mistakes/no-include.c) | Mistake example, does not build on purpose: the #include <stdio.h> line is commented out, so printf is not declared and the build fails. |
| [`code/placeholders.c`](code/placeholders.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
