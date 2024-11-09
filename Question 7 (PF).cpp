#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#define ROWS 6
#define COLS 5

void populate_array(char arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = 'A' + (rand() % 26); 
        }
    }
}

void print_array(char arr[ROWS][COLS]) {
    printf("\n2D Array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int search_string(char arr[ROWS][COLS], const char* str) {
    int len = strlen(str);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <= COLS - len; j++) {
            if (strncmp(&arr[i][j], str, len) == 0) {
                return 1;
            }
        }
    }
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i <= ROWS - len; i++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (arr[i + k][j] != str[k]) {
                    found = 0;
                    break;
                }
            }
            if (found) {
                return 1;
            }
        }
    }
    return 0; 
}

int main() {
    char array[ROWS][COLS];
    char input[100];
    int score = 0;
    srand(time(0)); 
    populate_array(array);
    while (1) {
        print_array(array); 
        printf("\nEnter a string to search (or 'END' to stop): ");
        scanf("%s", input); 

        if (strcmp(input, "END") == 0) {
            populate_array(array); 
            printf("Re-populating the array with new random characters...\n");
            continue;
        }
        if (search_string(array, input)) {
            score += 1; 
            printf("String found! Score: %d\n", score);
        } else {
            score -= 1; 
            printf("String not found. Score: %d\n", score);
        }
    }
    return 0; 
}
