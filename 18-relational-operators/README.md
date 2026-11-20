# Episode 18 · Relational Operators

*Comparing values in C*

The six operators C uses to compare values, what a comparison actually gives back, and two traps that compile without a word of warning.

**Notes:** [18-relational-operators.pdf](18-relational-operators.pdf) (colour PDF, A4)

## Key points

- C compares with six operators: >, <, >=, <=, == and !=.
- A comparison is a number: 1 when it's true, 0 when it's false.
- == compares, = stores. Putting the constant on the left (3 == n) turns a missing = into a build error.
- C compares two things at a time, so i < j < k doesn't check a range. Write i < j && j < k.

## Code

| File | What it is |
|---|---|
| [`code/age_range.c`](code/age_range.c) | Program from the video |
| [`code/age_range_fixed.c`](code/age_range_fixed.c) | Program from the video |
| [`code/chained_compare.c`](code/chained_compare.c) | Program from the video |
| [`code/chained_compare_fixed.c`](code/chained_compare_fixed.c) | Program from the video |
| [`code/comparison_value.c`](code/comparison_value.c) | Program from the video |
| [`code/constant_on_left.c`](code/constant_on_left.c) | Program from the video |
| [`code/equals_three.c`](code/equals_three.c) | Program from the video |
| [`code/equals_three_typo.c`](code/equals_three_typo.c) | Program from the video |
| [`code/mistakes/constant_on_left_typo.c`](code/mistakes/constant_on_left_typo.c) | Mistake example |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
