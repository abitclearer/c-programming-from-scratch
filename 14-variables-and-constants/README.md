# Episode 14 · Variables and Constants

*Values that change, and values that don't*

Types create variables and constants; a variable's value can change, a constant's can't.

**Notes:** [14-variables-and-constants.pdf](14-variables-and-constants.pdf) (colour PDF, A4)

## Key points

- A variable needs a type and a name. Names use letters, digits and underscores, and never start with a digit.
- Initialization gives a variable its first value when it's created; assignment gives it a new value later.
- Local variables live in braces, on the stack, and start with garbage. Globals work everywhere, live in the static area and start at 0.
- Three kinds of constants: literals (37, 037, 0x1F, 3.14f, 1.2e3), #define names, and const variables.

## Code

| File | What it is |
|---|---|
| [`code/const-num.c`](code/const-num.c) | Program from the video |
| [`code/define.c`](code/define.c) | Program from the video |
| [`code/global-count.c`](code/global-count.c) | Program from the video |
| [`code/global-default.c`](code/global-default.c) | Program from the video |
| [`code/init-assign.c`](code/init-assign.c) | Program from the video |
| [`code/literals.c`](code/literals.c) | Program from the video |
| [`code/mistakes/const-assign.c`](code/mistakes/const-assign.c) | Mistake example |
| [`code/mistakes/define-assign.c`](code/mistakes/define-assign.c) | Mistake example |
| [`code/mistakes/uninitialized-local.c`](code/mistakes/uninitialized-local.c) | Mistake example |
| [`code/shadow.c`](code/shadow.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
