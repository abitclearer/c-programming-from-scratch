# Episode 23 · The for Loop

*Three parts, one line*

The for loop in C puts the initialization, the test and the update in one pair of parentheses.

**Notes:** [23-the-for-loop.pdf](23-the-for-loop.pdf) (colour PDF, A4)

## Key points

- for (initialization; test; update) holds the same three jobs a while loop spreads over three places, separated by two semicolons.
- The initialization runs once. After that it's test, body, update, over and over, until the test is 0.
- Any part can be left empty, but the semicolons stay, and an empty test is always true, so the loop never ends.
- The comma operator runs its expressions from left to right and gives the value of the last one. It has the lowest precedence of all.

## Code

| File | What it is |
|---|---|
| [`code/comma_no_parentheses.c`](code/comma_no_parentheses.c) | Program from the video |
| [`code/comma_operator.c`](code/comma_operator.c) | Program from the video |
| [`code/count_1_to_10.c`](code/count_1_to_10.c) | Program from the video |
| [`code/declare_inside.c`](code/declare_inside.c) | Program from the video |
| [`code/i_after_loop.c`](code/i_after_loop.c) | Program from the video |
| [`code/mistakes/i_out_of_scope.c`](code/mistakes/i_out_of_scope.c) | Mistake example |
| [`code/odd_numbers.c`](code/odd_numbers.c) | Program from the video |
| [`code/savings.c`](code/savings.c) | Program from the video |
| [`code/skip_initialization.c`](code/skip_initialization.c) | Program from the video |
| [`code/sum_multiples_of_3.c`](code/sum_multiples_of_3.c) | Program from the video |
| [`code/sum_multiples_of_3_step.c`](code/sum_multiples_of_3_step.c) | Program from the video |
| [`code/two_variables.c`](code/two_variables.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
