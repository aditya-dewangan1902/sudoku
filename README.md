````md
# 🧩 Sudoku Game in C

A console-based Sudoku game where the user fills empty cells in a predefined **9×9** puzzle and the game checks move validity and puzzle completion.

---

## ✨ Features
- **Pre-loaded Puzzle**: Starts with a fixed Sudoku grid  
- **Move Validation**: Ensures rules for row, column, and 3×3 sub-grid  
- **Immutable Fixed Cells**: Original numbers cannot be changed  
- **Live Board Updates**: Board refreshes after every move  
- **Completion Detection**: Announces when solved  
- **Exit Option**: Quit anytime using `0 0 0`

---

## 🛠 Build & Run

### Linux / macOS
```sh
gcc src/sudoku.c -o sudoku
./sudoku
````

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
