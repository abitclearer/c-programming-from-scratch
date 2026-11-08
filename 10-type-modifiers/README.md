# Episode 10 · Type Modifiers

*Fine-Tuning the Built-In Types*

Type modifiers make C's built-in types more precise; they come in two groups, one for length and one for sign.

**Notes:** [10-type-modifiers.pdf](10-type-modifiers.pdf) (colour PDF, A4)

## Key points

- Type modifiers come in two groups: short and long (length) and signed and unsigned (sign).
- short and long change how much memory an integer may use; long also works with double.
- signed types can hold negative values; unsigned types hold only zero and positive values.
- The modifier goes in front of the type, and with int the modifier alone is enough.

## Code

| File | What it is |
|---|---|
| [`code/mistakes/short-float.c`](code/mistakes/short-float.c) | Mistake example, does not build on purpose: short only modifies integer types, so short float is illegal. |
| [`code/modifiers.c`](code/modifiers.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
