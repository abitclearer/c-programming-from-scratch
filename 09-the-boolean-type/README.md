# Episode 09 · The Boolean Type

*True, False, and a Bit of History*

How C represents true and false, from the zero and nonzero rule to _Bool, stdbool.h and the C23 keywords.

**Notes:** [09-the-boolean-type.pdf](09-the-boolean-type.pdf) (colour PDF, A4)

## Key points

- In C, zero means false and any nonzero value means true.
- C99 added the _Bool type; stdbool.h adds the names bool, true and false.
- The name _Bool avoids clashing with programs that already defined their own bool.
- C23 makes bool, true and false keywords, but Visual Studio 2026 still needs stdbool.h.

## Code

| File | What it is |
|---|---|
| [`code/bool-flag-false.c`](code/bool-flag-false.c) | Program from the video |
| [`code/bool-flag.c`](code/bool-flag.c) | Program from the video |
| [`code/bool-name.c`](code/bool-name.c) | Program from the video |
| [`code/bool-stores-one.c`](code/bool-stores-one.c) | Program from the video |
| [`code/mistakes/c23-without-header.c`](code/mistakes/c23-without-header.c) | Mistake example, does not build on purpose: bool and true are keywords only in C23, and the |
| [`code/mistakes/missing-stdbool.c`](code/mistakes/missing-stdbool.c) | Mistake example, does not build on purpose: true is not defined without #include <stdbool.h>. |
| [`code/zero-and-nonzero.c`](code/zero-and-nonzero.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
