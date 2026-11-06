# Episode 03 · Your First C Program

*From Empty Project to Running Code*

In Visual Studio 2026 Community, we create an empty project, add a source file named hello.c, type a short program, then build and run it until the console prints hello C.

**Notes:** [03-your-first-c-program.pdf](03-your-first-c-program.pdf) (colour PDF, A4)

## Key points

- A project keeps your source files together with the settings Visual Studio needs to build them.
- Name the file `hello.c`. The extension, not the template, decides that it is compiled as C.
- Build Solution compiles and links; Ctrl+F5 builds when needed, then runs.
- The program lands in `x64\Debug`, named after the project: `first_program.exe`.

## Code

| File | What it is |
|---|---|
| [`code/hello.c`](code/hello.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
