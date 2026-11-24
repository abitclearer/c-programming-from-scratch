# Episode 22 · The while Loop

*Repeat while a condition is true*

The while loop in C: check a condition, run the body, go back and check again, until the condition is 0.

**Notes:** [22-the-while-loop.pdf](22-the-while-loop.pdf) (colour PDF, A4)

## Key points

- A while loop looks just like an if, but after the body runs, it goes back and checks the condition again.
- The condition is checked before every round. When it's 0 (false), the loop ends; if it's false from the start, the body never runs.
- Something inside the loop has to move the condition towards false, or the loop runs forever.
- n % 10 gets the last digit of a number, and n /= 10 throws it away. Together, in a loop, they walk through a number digit by digit.

## Code

| File | What it is |
|---|---|
| [`code/boss_fight.c`](code/boss_fight.c) | Program from the video |
| [`code/count_1_to_10.c`](code/count_1_to_10.c) | Program from the video |
| [`code/count_if.c`](code/count_if.c) | Program from the video |
| [`code/even_numbers.c`](code/even_numbers.c) | Program from the video |
| [`code/even_numbers_filter.c`](code/even_numbers_filter.c) | Program from the video |
| [`code/hello_once.c`](code/hello_once.c) | Program from the video |
| [`code/reverse_digits.c`](code/reverse_digits.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
