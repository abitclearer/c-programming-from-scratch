# Episode 16 · Expression Evaluation

*Precedence, conversions and the order C never promised*

How C works out an expression: which operator goes first, which types are used, and what C never promises.

**Notes:** [16-expression-evaluation.pdf](16-expression-evaluation.pdf) (colour PDF, A4)

## Key points

- Precedence decides which operator goes first (3 + 4 * 5 is 23). Associativity only breaks a tie between operators on the same level (8 / 4 * 2 is 4). Parentheses override both.
- Integer promotion turns char and short into int before the math, so sizeof(c + c) is 4.
- The usual arithmetic conversions bring two different types up to the higher one (int + float → float). A cast like (double)a converts on purpose.
- Changing the same variable twice in one expression is undefined behavior: (++i) + (++i) + (++i) gives 12, 10 or 9 depending on the compiler.

## Code

| File | What it is |
|---|---|
| [`code/cast.c`](code/cast.c) | Program from the video |
| [`code/conversion.c`](code/conversion.c) | Program from the video |
| [`code/precedence.c`](code/precedence.c) | Program from the video |
| [`code/promotion.c`](code/promotion.c) | Program from the video |
| [`code/steps.c`](code/steps.c) | Program from the video |
| [`code/undefined.c`](code/undefined.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
