# Episode 17 · If Statements

*Making decisions with if, else and else if*

How C makes decisions with if, else and else if, and the three traps that catch almost everyone.

**Notes:** [17-if-statements.pdf](17-if-statements.pdf) (colour PDF, A4)

## Key points

- An if runs its statement only when the condition is true, and in C "true" means "not zero".
- Two equals signs compare (==); one equals sign stores (=). if (x = 5) is always true.
- Without braces, an if or else controls just one statement. In an else if chain, the first true condition wins.
- An else pairs with the nearest if above it that doesn't have an else yet (the dangling else).

## Code

| File | What it is |
|---|---|
| [`code/assign_vs_compare.c`](code/assign_vs_compare.c) | Program from the video |
| [`code/dangling_else.c`](code/dangling_else.c) | Program from the video |
| [`code/dangling_else_fixed.c`](code/dangling_else_fixed.c) | Program from the video |
| [`code/discount.c`](code/discount.c) | Program from the video |
| [`code/odd_even.c`](code/odd_even.c) | Program from the video |
| [`code/pass_party.c`](code/pass_party.c) | Program from the video |
| [`code/scholarship.c`](code/scholarship.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
