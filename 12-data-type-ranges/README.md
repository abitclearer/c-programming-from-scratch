# Episode 12 · Data Type Ranges

*limits.h, float.h and overflow*

A type's size decides its range, the smallest and largest values it can hold; limits.h and float.h name every limit.

**Notes:** [12-data-type-ranges.pdf](12-data-type-ranges.pdf) (colour PDF, A4)

## Key points

- One byte gives 256 patterns, so a signed char holds -128 to 127 and an unsigned char 0 to 255.
- More bytes, wider range; unsigned types start at 0, so their maximum is a little more than double.
- Don't memorize the limits: they are named constants in limits.h and float.h.
- Past the range, unsigned types wrap around; signed overflow is undefined behavior.

## Code

| File | What it is |
|---|---|
| [`code/limits.c`](code/limits.c) | Program from the video |
| [`code/wrap.c`](code/wrap.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
