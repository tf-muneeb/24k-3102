#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void group_transactions(char transactions[][100], int num_transactions) {
    char sorted_transactions[num_transactions][100];
    int grouped[num_transactions]; 
    memset(grouped, 0, sizeof(grouped)); 
    for (int i = 0; i < num_transactions; i++) {
        strcpy(sorted_transactions[i], transactions[i]);
        sort_string(sorted_transactions[i]);
    }
    printf("Grouped transactions:\n");
    for (int i = 0; i < num_transactions; i++) {
        if (!grouped[i]) {
            printf("[");
            printf("%s", transactions[i]);
            grouped[i] = 1;
            for (int j = i + 1; j < num_transactions; j++) {
                if (!grouped[j] && strcmp(sorted_transactions[i], sorted_transactions[j]) == 0) {
                    printf(", %s", transactions[j]);
                    grouped[j] = 1;
                }
            }
            printf("]\n");
        }
    }
}

int main() {
    int num_transactions;
    printf("Enter the number of transactions: ");
    scanf("%d", &num_transactions);
    getchar(); 
    char transactions[num_transactions][100];
    for (int i = 0; i < num_transactions; i++) {
        printf("Enter transaction %d: ", i + 1);
        fgets(transactions[i], 100, stdin);
        transactions[i][strcspn(transactions[i], "\n")] = 0;
    }
    group_transactions(transactions, num_transactions);

    return 0;
}
