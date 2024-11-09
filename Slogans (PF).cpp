#include <stdio.h>
#include <string.h>
void analyze_frequency(char *slogan) {
    int frequency[26] = {0}; 
    int space_count = 0;
    for (int i = 0; slogan[i] != '\0'; i++) {
        if (slogan[i] >= 'a' && slogan[i] <= 'z') {
            frequency[slogan[i] - 'a']++; 
        } else if (slogan[i] == ' ') {
            space_count++;
        }
    }
    printf("Character frequencies for \"%s\":\n", slogan);
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i + 'a', frequency[i]);
        }
    }
    if (space_count > 0) {
        printf("' ' (space): %d\n", space_count);
    }
    printf("\n");
}

int main() {
    int num_slogans;
    printf("Enter the number of slogans: ");
    scanf("%d", &num_slogans);
    getchar();
    char slogans[num_slogans][100];
    for (int i = 0; i < num_slogans; i++) {
        printf("Enter slogan %d: ", i + 1);
        fgets(slogans[i], 100, stdin);
        slogans[i][strcspn(slogans[i], "\n")] = 0; 
    }
    for (int i = 0; i < num_slogans; i++) {
        analyze_frequency(slogans[i]);
    }
    return 0;
}
