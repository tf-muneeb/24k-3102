#include <stdio.h>
void get_input(int values[], int *count) {
    printf("Enter the number of values: ");
    scanf("%d", count);
    printf("Enter %d values: ", *count);
    for (int i = 0; i < *count; i++) {
        scanf("%d", &values[i]);
    }
}
void print_horizontal_histogram(int values[], int count) {
    printf("\nHorizontal Histogram:\n");
    for (int i = 0; i < count; i++) {
        printf("%d: ", values[i]);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void print_vertical_histogram(int values[], int count) {
    printf("\nVertical Histogram:\n");
    int max_value = values[0];
    for (int i = 1; i < count; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }
    for (int i = max_value; i > 0; i--) {
        for (int j = 0; j < count; j++) {
            if (values[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < count; i++) {
        printf("%2d ", values[i]);
    }
    printf("\n");
}

int main() {
    int values[100], count;
    get_input(values, &count);
    print_horizontal_histogram(values, count);
    print_vertical_histogram(values, count);
    return 0;
}
