#include <stdio.h>
#include <string.h>
void compress_word(char *word, char *compressed_word, int *removed_count) {
    int len = strlen(word);
    int j = 0;  
    *removed_count = 0;
    for (int i = 0; i < len; i++) {
        if (i == 0 || word[i] != word[i - 1]) {
            compressed_word[j++] = word[i];
        } else {
            (*removed_count)++; 
        }
    }
    compressed_word[j] = '\0'; 
}

void compress_words(char words[][100], int num_words) {
    char compressed_word[100];
    int total_removed = 0;
    for (int i = 0; i < num_words; i++) {
        int removed_count = 0;
        compress_word(words[i], compressed_word, &removed_count);
        printf("Original word: %s, Compressed word: %s, Characters removed: %d\n",
               words[i], compressed_word, removed_count);
        total_removed += removed_count;
    }
    printf("\nTotal characters removed: %d\n", total_removed);
}

int main() {
    int num_words;
    printf("Enter the number of words: ");
    scanf("%d", &num_words);
    getchar();
    char words[num_words][100];
    for (int i = 0; i < num_words; i++) {
        printf("Enter word %d: ", i + 1);
        fgets(words[i],100, stdin);
        words[i][strcspn(words[i], "\n")] = 0;
    }
    compress_words(words, num_words);
    return 0;
}
