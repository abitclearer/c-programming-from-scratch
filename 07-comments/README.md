# Episode 07 · Comments

*Explain the Code*

Write comments that explain C code, disable statements safely, and avoid the block-comment nesting trap.

**Notes:** [07-comments.pdf](07-comments.pdf) (colour PDF, A4)

## Key points

- Comments explain source code for people; they add no program output.
- Use // to the end of a line, or /* and */ for a block.
- Block comments do not nest; prefix selected lines with // instead.
- Keep comments useful and current when the code changes.

## Code

| File | What it is |
|---|---|
| [`code/comments-for-people.c`](code/comments-for-people.c) | Program from the video |
| [`code/disabled-block.c`](code/disabled-block.c) | Program from the video |
| [`code/disabled-lines.c`](code/disabled-lines.c) | Program from the video |
| [`code/mistakes/nested-comments.c`](code/mistakes/nested-comments.c) | Mistake example, does not build on purpose: block comments do not nest; the last closing marker is unmatched. |
| [`code/one-comment.c`](code/one-comment.c) | Program from the video |
| [`code/safe-line-comments.c`](code/safe-line-comments.c) | Program from the video |
| [`code/three-values.c`](code/three-values.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

Files in `code/mistakes/` are the mistakes shown in the video. They are meant to fail, so you can see the error for yourself.

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
