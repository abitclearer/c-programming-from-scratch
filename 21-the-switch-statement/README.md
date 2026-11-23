# Episode 21 · The switch Statement

*case, break and default in C*

The switch statement in C: one integer expression, a list of cases, break to leave, and default for everything else.

**Notes:** [21-the-switch-statement.pdf](21-the-switch-statement.pdf) (colour PDF, A4)

## Key points

- switch works out one integer expression and jumps to the case with the matching value. It's syntactic sugar for one kind of if / else if chain.
- A case only says where C comes in. break says where it leaves; without break, C falls through into the next case.
- default catches every value no case lists. It can go anywhere, but it's safest last, with its own break.
- After switch: an integer expression. After case: an integer constant. A variable, a const variable or a decimal won't build.

## Code

| File | What it is |
|---|---|
| [`code/case_constants.c`](code/case_constants.c) | Program from the video |
| [`code/day_names.c`](code/day_names.c) | Program from the video |
| [`code/default_first_no_break.c`](code/default_first_no_break.c) | Program from the video |
| [`code/mistakes/case_const_variable.c`](code/mistakes/case_const_variable.c) | Mistake example, does not build on purpose: in C, a const variable is still a variable, |
| [`code/mistakes/case_double.c`](code/mistakes/case_double.c) | Mistake example, does not build on purpose: 1.0 is a constant, but not an integer |
| [`code/mistakes/case_variable.c`](code/mistakes/case_variable.c) | Mistake example, does not build on purpose: n is a variable, and a case label |
| [`code/mistakes/switch_float.c`](code/mistakes/switch_float.c) | Mistake example, does not build on purpose: the expression after switch |
| [`code/remainder_if.c`](code/remainder_if.c) | Program from the video |
| [`code/remainder_no_break.c`](code/remainder_no_break.c) | Program from the video |
| [`code/remainder_switch.c`](code/remainder_switch.c) | Program from the video |
| [`code/weekday_default.c`](code/weekday_default.c) | Program from the video |
| [`code/weekday_grouped.c`](code/weekday_grouped.c) | Program from the video |
| [`code/weekday_repeated.c`](code/weekday_repeated.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
