# Episode 13 · ASCII and Escape Sequences

*Characters, codes and the backslash*

Every character in C has a numeric code from the ASCII table, and escape sequences let us write the characters we can't type directly.

**Notes:** [13-ascii-and-escape-sequences.pdf](13-ascii-and-escape-sequences.pdf) (colour PDF, A4)

## Key points

- Codes 0–31 and 127 are control characters; 32–126 are printable. 'A' is 65, 'a' is 97, '0' is 48.
- A character and its code are two views of one value: %c prints the character, %d prints the code.
- An escape sequence is a backslash plus a character (or an octal / hex code), and it is always one character.
- Every string ends with a hidden \0; strlen counts the characters before it.

## Code

| File | What it is |
|---|---|
| [`code/char_codes.c`](code/char_codes.c) | Program from the video |
| [`code/cursor.c`](code/cursor.c) | Program from the video |
| [`code/lengths.c`](code/lengths.c) | Program from the video |
| [`code/numeric.c`](code/numeric.c) | Program from the video |
| [`code/printable.c`](code/printable.c) | Program from the video |
| [`code/quotes.c`](code/quotes.c) | Program from the video |

Each program ends with an `/* Output: */` comment showing what it prints. To run one, add the file to an empty
Visual Studio project (the course uses Visual Studio 2026 Community with the *Desktop development with C++* workload),
then Build Solution (Ctrl+Shift+B) and Start Without Debugging (Ctrl+F5).

---
Part of [C Programming from Scratch](../README.md) by A Bit Clearer.
