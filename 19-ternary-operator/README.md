# Episode 19 · Ternary Operator

*The conditional operator ?: in C*

The one operator in C that takes three operands, how it decides which side runs, and when to use it instead of an if else.

**Notes:** [19-ternary-operator.pdf](19-ternary-operator.pdf) (colour PDF, A4)

## Key points

- The conditional operator is condition ? value-if-true : value-if-false. Three operands, so it's also called the ternary operator.
- C evaluates the condition first, then only one of the other two.
- It's an expression, so it gives a value you can store, print, or pass along. An if else is a statement.
- Use it for simple either-or choices. You can nest it, but lay it out one condition per line, and prefer if / else if for real branching.

## Code

| File | What it is |
|---|---|
| [`code/max_if.c`](code/max_if.c) | Program from the video |
| [`code/max_printf.c`](code/max_printf.c) | Program from the video |
| [`code/max_ternary.c`](code/max_ternary.c) | Program from the video |
| [`code/reply_mood.c`](code/reply_mood.c) | Program from the video |
| [`code/reply_mood_if.c`](code/reply_mood_if.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
