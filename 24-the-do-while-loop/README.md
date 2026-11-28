# Episode 24 · The do while Loop

*Do first, check later*

The do while loop in C runs the body first and checks the condition afterwards.

**Notes:** [24-the-do-while-loop.pdf](24-the-do-while-loop.pdf) (colour PDF, A4)

## Key points

- do { body } while (condition); runs the body, then checks the condition. True (not 0) means go again, 0 means stop.
- So the body always runs at least once. A while or for loop checks first and can run zero times.
- The while of a do while loop ends with a semicolon. A while loop has none there.
- Use it when the work has to happen before you can check, like counting digits or asking for input until it's valid.

## Code

| File | What it is |
|---|---|
| [`code/count_1_to_10.c`](code/count_1_to_10.c) | Program from the video |
| [`code/count_digits.c`](code/count_digits.c) | Program from the video |
| [`code/count_digits_while.c`](code/count_digits_while.c) | Program from the video |
| [`code/count_digits_zero.c`](code/count_digits_zero.c) | Program from the video |
| [`code/do_while_once.c`](code/do_while_once.c) | Program from the video |
| [`code/positive_input.c`](code/positive_input.c) | Program from the video |
| [`code/while_zero_times.c`](code/while_zero_times.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
