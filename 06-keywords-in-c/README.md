# Episode 06 · Keywords in C

*Reserved Words and Language Vocabulary*

Keywords are reserved words built into C with permanent grammatical meanings. You cannot invent keywords or use them as variable names; the 32 classic keywords from ANSI C form the foundation of C's vocabulary.

**Notes:** [06-keywords-in-c.pdf](06-keywords-in-c.pdf) (colour PDF, A4)

## Key points

- Keywords are reserved by the language; words like int and return have built-in meanings.
- Two strict rules: you cannot invent new keywords, and variable/function names cannot collide with keywords.
- ANSI C (C89) defined exactly 32 classic keywords, making up almost all of C's core vocabulary.
- Attempting to name a variable after a keyword (e.g. int char;) causes a syntax error.

## Code

| File | What it is |
|---|---|
| [`code/mistakes/keyword-identifier.c`](code/mistakes/keyword-identifier.c) | Mistake example |
| [`code/variable-naming.c`](code/variable-naming.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
