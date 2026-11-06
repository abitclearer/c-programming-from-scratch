# Episode 07 · Comments in C

*Writing for Humans and Compilers*

Comments are explanatory notes for human readers that are completely ignored by the compiler. C provides two styles—classic block comments and modern single-line comments. Block comments cannot be nested, and good comments focus on explaining why rather than what.

**Notes:** [07-comments-in-c.pdf](07-comments-in-c.pdf) (colour PDF, A4)

## Key points

- Comments are stripped during preprocessing (replaced by a space) and carry zero runtime overhead.
- C provides two comment styles: classic block comments (/* ... */) and modern single-line comments (//).
- Block comments cannot be nested; attempting to nest them leads to premature closing and syntax errors.
- Good comments explain intentions and design decisions (the WHY), rather than self-evident mechanics.

## Code

| File | What it is |
|---|---|
| [`code/comments-demo.c`](code/comments-demo.c) | Program from the video |
| [`code/mistakes/nested-comments.c`](code/mistakes/nested-comments.c) | Mistake example |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
