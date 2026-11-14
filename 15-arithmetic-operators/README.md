# Episode 15 · Arithmetic Operators

*Doing math in C, from 9 / 2 to ++*

C's arithmetic, assignment and unary operators, and why 9 / 2 is 4.

**Notes:** [15-arithmetic-operators.pdf](15-arithmetic-operators.pdf) (colour PDF, A4)

## Key points

- When both operands of / are integers, C does integer division and drops the remainder. Make one operand floating-point to get a decimal.
- The % operator gives the remainder of two integers. Its sign follows the first operand, and % 10 gives the last digit.
- scanf reads input into variables through their addresses (&num1). In Visual Studio, put #define _CRT_SECURE_NO_WARNINGS 1 on the very first line.
- ++ and -- add or subtract one. In front (++n) they change first; behind (n++) they use first.

## Code

| File | What it is |
|---|---|
| [`code/add-sub-mul.c`](code/add-sub-mul.c) | Program from the video |
| [`code/assignment.c`](code/assignment.c) | Program from the video |
| [`code/average.c`](code/average.c) | Program from the video |
| [`code/compound.c`](code/compound.c) | Program from the video |
| [`code/division.c`](code/division.c) | Program from the video |
| [`code/increment.c`](code/increment.c) | Program from the video |
| [`code/mistakes/float-remainder.c`](code/mistakes/float-remainder.c) | Mistake example |
| [`code/mistakes/scanf-unsafe.c`](code/mistakes/scanf-unsafe.c) | Mistake example |
| [`code/remainder.c`](code/remainder.c) | Program from the video |
| [`code/score.c`](code/score.c) | Program from the video |
| [`code/signs.c`](code/signs.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
