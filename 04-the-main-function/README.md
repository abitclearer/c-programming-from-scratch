# Episode 04 · The main Function

*Where Every C Program Starts*

Every C program starts at main. Execution enters main and runs down it one statement at a time; a program has exactly one main, framed by int main() and return 0.

**Notes:** [04-the-main-function.pdf](04-the-main-function.pdf) (colour PDF, A4)

## Key points

- Execution always begins at main and runs from the top of main downward.
- One program, one main, even when the project has several .c files.
- int promises an integer and return 0 delivers it. 0 means a normal exit; non-zero, an abnormal one.
- Header = return type, name, parameters. Body = the curly braces. Every statement goes inside.

## Code

| File | What it is |
|---|---|
| [`code/hello.c`](code/hello.c) | Program from the video |
| [`code/mistakes/full-width.c`](code/mistakes/full-width.c) | Mistake example, does not build on purpose: the parentheses after main and the semicolon after return 0 were typed full-width. |
| [`code/mistakes/mian.c`](code/mistakes/mian.c) | Mistake example, does not build on purpose: main is misspelled as mian, so the program has no main function. |
| [`code/mistakes/missing-semicolon.c`](code/mistakes/missing-semicolon.c) | Mistake example, does not build on purpose: the semicolon after return 0 is missing. |
| [`code/mistakes/no-parentheses.c`](code/mistakes/no-parentheses.c) | Mistake example, does not build on purpose: the parentheses after main are missing. |
| [`code/mistakes/outside-main.c`](code/mistakes/outside-main.c) | Mistake example, does not build on purpose: the printf statement sits outside main, above int main, instead of inside a function body. |
| [`code/mistakes/two-files/hello.c`](code/mistakes/two-files/hello.c) | Mistake example, does not build on purpose: hello.c and second.c each have a main function, and they are built into one program. |
| [`code/mistakes/two-files/second.c`](code/mistakes/two-files/second.c) | Mistake example, does not build on purpose: second.c has a second main function; hello.c already has one. |
| [`code/mistakes/two-mains.c`](code/mistakes/two-mains.c) | Mistake example, does not build on purpose: it has two main functions, so the second one "already has a body". |
| [`code/template.c`](code/template.c) | Program from the video |
| [`code/three-prints.c`](code/three-prints.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
