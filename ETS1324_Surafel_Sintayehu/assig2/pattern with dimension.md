
## Problem Description

This program prints 12 different patterns based on a given dimension `n`. The patterns include number patterns, alphabet patterns, pyramids, and hollow patterns using stars (`*`). Each pattern is printed sequentially.

### Problem Analysis

- **Input**:
  - `n` (integer): The dimension of the patterns (e.g., `n = 5`).
- **Output**:
  - Prints 12 different patterns to the console.

### Pseudocode:

1. **Start**.

2. **Pattern 1**: Number Pattern (1 to `n` in rows)
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `n`:
       - Print numbers from `1` to `n` separated by space.
   - Print a newline character to move to the next row.

3. **Pattern 2**: Alphabet Pattern (A to `F`, repeating to `X`)
   - Start `ch` at 'A'.
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `6`:
       - Print the character `ch` and increment `ch`.
       - If `ch` reaches 'X', reset it to 'A'.
   - Print a newline character to move to the next row.

4. **Pattern 3**: Number Pyramid (1, 2 3, ...)
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `i`:
       - Print numbers from `1` to `i` separated by space.
   - Print a newline character to move to the next row.

5. **Pattern 4**: Reverse Number Pyramid with Spaces
   - For each row `i` from `1` to `n`:
     - Print spaces to align numbers to the right.
     - For each column `j` from `i` to `1`:
       - Print numbers from `i` to `1` separated by space.
   - Print a newline character to move to the next row.

6. **Pattern 5**: Character Triangle (A to `E`)
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `i`:
       - Print the character corresponding to `j` (from 'A' to 'E').
   - Print a newline character to move to the next row.

7. **Pattern 6**: Repeated Lowercase Letters (`a` to `e`)
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `n`:
       - Print the character from 'a' to 'e' separated by space.
   - Print a newline character to move to the next row.

8. **Pattern 7**: Square Star Pattern
   - For each row `i` from `1` to `n`:
     - For each column `j` from `1` to `n`:
       - If the row is the first or last (`i == 1` or `i == n`) or the column is the first or last (`j == 1` or `j == n`), print `*`.
       - Otherwise, print a space.
   - Print a newline character to move to the next row.

9. **Pattern 8**: Inverted Half Pyramid
   - For each row `i` from `n` to `1`:
     - For each column `j` from `1` to `i`:
       - Print `*` separated by space.
   - Print a newline character to move to the next row.

10. **Pattern 9**: Hollow Inverted Half Pyramid
    - For each row `i` from `n` to `1`:
      - For each column `j` from `1` to `i`:
        - If the row is the first or last (`j == 1` or `j == i`) or the row is the first or last (`i == n`), print `*`.
        - Otherwise, print a space.
    - Print a newline character to move to the next row.

11. **Pattern 10**: Full Pyramid
    - For each row `i` from `1` to `n`:
      - Print spaces to align numbers to the center.
      - For each column `j` from `1` to `2*i - 1`:
        - Print `*` separated by space.
    - Print a newline character to move to the next row.

12. **Pattern 11**: Inverted Full Pyramid
    - For each row `i` from `n` to `1`:
      - Print spaces to align numbers to the center.
      - For each column `j` from `1` to `2*i - 1`:
        - Print `*` separated by space.
    - Print a newline character to move to the next row.

13. **Pattern 12**: Hollow Full Pyramid
    - For each row `i` from `1` to `n`:
      - Print spaces to align numbers to the center.
      - For each column `j` from `1` to `2*i - 1`:
        - If the column is the first or last (`j == 1` or `j == 2*i - 1`) or the row is the last (`i == n`), print `*`.
        - Otherwise, print a space.
    - Print a newline character to move to the next row.

14. **End**.
