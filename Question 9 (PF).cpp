#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void initializeGrid(char grid[5][5]) {
    for (int i = 0; i <5; i++) {
        for (int j = 0; j < 5; j++) {
            grid[i][j] = ' ';
        }
    }
    grid[1][1] = 'I'; 
    grid[2][3] = 'I'; 
    grid[4][2] = 'I'; 
    grid[1][3] = 'X'; 
    grid[3][1] = 'X'; 
    grid[0][0] = 'P'; 
}

void displayGrid(char grid[5][5]) {
    printf("\nCurrent Grid:\n");
    for (int i = 0; i <5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

void updatePosition(char grid[5][5], int *playerRow, int *playerCol, int newRow, int newCol) {
    if (grid[newRow][newCol] == 'I') {
        printf("You collected an item!\n");
    }
    grid[*playerRow][*playerCol] = ' '; 
    grid[newRow][newCol] = 'P'; 
    *playerRow = newRow; 
    *playerCol = newCol; 
}

void movePlayer(char grid[5][5], int *playerRow, int *playerCol, char move) {
    int newRow = *playerRow;
    int newCol = *playerCol;
    switch (move) {
        case 'W': 
            newRow--;
            break;
        case 'S': 
            newRow++;
            break;
        case 'A': 
            newCol--;
            break;
        case 'D':
            newCol++;
            break;
        case 'Q': 
            printf("Thanks for playing!\n");
            exit(0);
        default:
            printf("Invalid move! Use W, A, S, D to move or Q to quit.\n");
            return;
    }
    if (newRow >= 0 && newRow <5 && newCol >= 0 && newCol < 5) {
        if (grid[newRow][newCol] != 'X') {
            updatePosition(grid, playerRow, playerCol, newRow, newCol);
        } else {
            printf("You cannot move into an obstacle!\n");
        }
    } else {
        printf("Move out of bounds! Try again.\n");
    }
}

int main() {
    char grid[5][5];
    int playerRow = 0, playerCol = 0;
    char move;
    initializeGrid(grid); 
    while (true) {
        displayGrid(grid); 
        printf("Enter your move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &move); 
        movePlayer(grid, &playerRow, &playerCol, move); 
    }
    return 0;
}
