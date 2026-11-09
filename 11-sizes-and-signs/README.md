# Episode 11 · Sizes and Signs

*sizeof, short, long, signed and unsigned*

sizeof measures how many bytes a type uses; short and long change that size, and signed and unsigned decide whether a type can be negative.

**Notes:** [11-sizes-and-signs.pdf](11-sizes-and-signs.pdf) (colour PDF, A4)

## Key points

- A byte is eight bits; sizeof gives a type's size in bytes, printed with %zu.
- The standard fixes only the order of sizes, so long and long double differ between platforms; stdint.h has exact widths.
- Signed types hold negative values, unsigned types don't; integers are signed by default, a plain char depends on the compiler.
- sizeof gives back a size_t, an unsigned type that %zu always matches.

## Code

| File | What it is |
|---|---|
| [`code/fixed-width.c`](code/fixed-width.c) | Program from the video |
| [`code/sizes.c`](code/sizes.c) | Program from the video |
| [`code/unsigned-age.c`](code/unsigned-age.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
