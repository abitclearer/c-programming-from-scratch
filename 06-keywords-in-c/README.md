# Episode 06 · Keywords in C

*Reserved Words and the 32 Classic Keywords*

Keywords are reserved words built into C, each with a fixed meaning. ANSI C and C89 defined 32 of them.

**Notes:** [06-keywords-in-c.pdf](06-keywords-in-c.pdf) (colour PDF, A4)

## Key points

- Keywords, like int and return, belong to the language.
- You can't invent keywords or use one as a name.
- ANSI C / C89 defined exactly 32 classic keywords.
- int char; fails: char is a keyword, not a name.

## Code

| File | What it is |
|---|---|
| [`code/mistakes/keyword-identifier.c`](code/mistakes/keyword-identifier.c) | Mistake example, does not build on purpose: char is a keyword, not a name. |
| [`code/variable-naming.c`](code/variable-naming.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
