#include<stdio.h>
int main() {
    int start;
    printf("Enter an odd number to start the pattern: \n");
    scanf("%d", &start);
    printf ("\n");
    if (start % 2 == 0) {
        printf("Please enter an odd number \n");
        return 0;
    }
    for (int i = start; i >= 1; i -= 2) {
        for (int j = i; j >= 1; j -= 2) {
            printf("%d ", j);
        }
        printf("\n"); 
    }
    return 0;
}
