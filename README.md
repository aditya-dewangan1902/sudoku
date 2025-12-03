# 🧩 Sudoku Game in C

A console-based Sudoku game where the user fills empty cells in a predefined **9×9** puzzle and the game checks move validity and puzzle completion.

## Features
- Pre-loaded fixed puzzle  
- Validity check for row, column, and sub-grid  
- Original cells locked  
- Updated board after each move  
- Detects completion  
- Exit using `0 0 0`

## Build & Run (Single Terminal)
gcc src/sudoku.c -o sudoku && ./sudoku

## Controls
Input: row col value  
Example: 3 4 7  
Exit: 0 0 0

## Author
**Aditya Dewangan**


### Windows (MinGW)

```sh
gcc src/sudoku.c -o sudoku.exe
sudoku.exe
```

---

## 🎮 Controls

**Input Format**

```
row col value
```

**Example**

```
3 4 7
```

(Places number **7** in row **3**, column **4**)

**Exit Game**

```
0 0 0
```

---

## 👤 Author

**Aditya Dewangan**

```
```
