#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int saddle_point_found = 0; 
    for (i = 0; i < 3; i++) {
        int min_row_val = matrix[i][0];
        int min_col_index = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < min_row_val) {
                min_row_val = matrix[i][j];
                min_col_index = j;
            }
        }
        int is_saddle_point = 1; 
        for (j = 0; j < 3; j++) {
            if (matrix[j][min_col_index] > min_row_val) {
                is_saddle_point = 0;
                break;
            }
        }
        if (is_saddle_point) {
            printf("Saddle point found at position (%d, %d) with value %d\n", i, min_col_index, min_row_val);
            saddle_point_found = 1;
        }
    }
    if (!saddle_point_found) {
        printf("No saddle point found in the matrix.\n");
    }
    return 0;
}
