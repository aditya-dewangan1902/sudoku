#include <stdio.h>

#define SIZE 9

void copy_board(int src[SIZE][SIZE], int dest[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

void print_board(int board[SIZE][SIZE]) {
    int i, j;
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        if (i % 3 == 0 && i != 0) {
            printf("------+-------+------\n");
        }
        for (j = 0; j < SIZE; j++) {
            if (j % 3 == 0 && j != 0) {
                printf("| ");
            }
            if (board[i][j] == 0)
                printf(". ");
            else
                printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int is_valid_move(int board[SIZE][SIZE], int row, int col, int num) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        if (board[row][i] == num) return 0;
        if (board[i][col] == num) return 0;
    }
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (i = startRow; i < startRow + 3; i++) {
        for (j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == num) return 0;
        }
    }
    return 1;
}

int is_complete(int board[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) return 0;
        }
    }
    return 1;
}

int main() {
    int puzzle[SIZE][SIZE] = {
        {5,3,0, 0,7,0, 0,0,0},
        {6,0,0, 1,9,5, 0,0,0},
        {0,9,8, 0,0,0, 0,6,0},

        {8,0,0, 0,6,0, 0,0,3},
        {4,0,0, 8,0,3, 0,0,1},
        {7,0,0, 0,2,0, 0,0,6},

        {0,6,0, 0,0,0, 2,8,0},
        {0,0,0, 4,1,9, 0,0,5},
        {0,0,0, 0,8,0, 0,7,9}
    };

    int original[SIZE][SIZE];
    int board[SIZE][SIZE];
    int row, col, num;

    copy_board(puzzle, original);
    copy_board(puzzle, board);

    while (1) {
        print_board(board);
        printf("Enter row (1-9), col (1-9), value (1-9)\n");
        printf("Enter 0 0 0 to quit: ");
        if (scanf("%d %d %d", &row, &col, &num) != 3) {
            printf("Invalid input\n");
            return 0;
        }

        if (row == 0 && col == 0 && num == 0) {
            printf("Exiting.\n");
            break;
        }

        if (row < 1 || row > 9 || col < 1 || col > 9 || num < 1 || num > 9) {
            printf("Values must be between 1 and 9.\n");
            continue;
        }

        row--;
        col--;

        if (original[row][col] != 0) {
            printf("You cannot change this fixed cell.\n");
            continue;
        }

        if (!is_valid_move(board, row, col, num)) {
            printf("This move is not allowed.\n");
            continue;
        }

        board[row][col] = num;

        if (is_complete(board)) {
            print_board(board);
            printf("Sudoku solved! Well done.\n");
            break;
        }
    }

    return 0;
}
