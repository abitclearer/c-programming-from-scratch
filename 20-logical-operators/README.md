# Episode 20 · Logical Operators

*&&, || and ! in C*

The three logical operators in C, how to combine conditions with them, and why C sometimes never runs the right-hand side at all.

**Notes:** [20-logical-operators.pdf](20-logical-operators.pdf) (colour PDF, A4)

## Key points

- C has three logical operators: && (and), || (or) and ! (not). Each gives 1 for true and 0 for false.
- && is true only when both sides are true; || is true when at least one side is. ! flips a value.
- && goes before ||, so (rule 1) || rule 2 fits a leap year check into one condition. Parentheses still help.
- Short-circuit evaluation: the left side goes first; && stops at the first false, || stops at the first true.

## Code

| File | What it is |
|---|---|
| [`code/hidden_room.c`](code/hidden_room.c) | Program from the video |
| [`code/leap_year.c`](code/leap_year.c) | Program from the video |
| [`code/leap_year_one.c`](code/leap_year_one.c) | Program from the video |
| [`code/rock_paper_scissors.c`](code/rock_paper_scissors.c) | Program from the video |
| [`code/short_circuit_and.c`](code/short_circuit_and.c) | Program from the video |
| [`code/short_circuit_and_a1.c`](code/short_circuit_and_a1.c) | Program from the video |
| [`code/short_circuit_or.c`](code/short_circuit_or.c) | Program from the video |
| [`code/short_circuit_or_a0.c`](code/short_circuit_or_a0.c) | Program from the video |
| [`code/spring.c`](code/spring.c) | Program from the video |
| [`code/spring_chained.c`](code/spring_chained.c) | Program from the video |
| [`code/winter.c`](code/winter.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
