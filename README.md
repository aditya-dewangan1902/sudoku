🧩 Sudoku Game in C

A console-based Sudoku game where the user fills empty cells in a predefined 9×9 puzzle and the game checks move validity and puzzle completion.

Features

Pre-loaded Puzzle: Starts with a fixed Sudoku grid.

Move Validation: Checks validity against row, column, and 3×3 sub-grid rules.

Immutable Fixed Cells: Prevents editing the original puzzle numbers.

Live Board Updates: clear display of the board after every move.

Completion Detection: Detects and announces when the puzzle is solved.

Exit Option: Quit anytime using 0 0 0.

Build & Run

Linux / macOS

gcc src/sudoku.c -o sudoku
./sudoku


Windows (MinGW)

gcc src/sudoku.c -o sudoku.exe
sudoku.exe


Controls

Input format:

row col value


Example:

3 4 7


(Places the number 7 in row 3, column 4)

Exit Game:

0 0 0


Author

Aditya Dewangan
