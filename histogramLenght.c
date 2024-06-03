#include <stdio.h>

#define MAX_LENGTH 20 // Maximum word length to consider

int main() {
    int wordLengths[MAX_LENGTH + 1] = {0}; // Array to store word lengths
    int c;
    int wordLength = 0;

    // Read input and count word lengths
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (wordLength > 0 && wordLength <= MAX_LENGTH) {
                wordLengths[wordLength]++;
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    // Print histogram
    printf("Histogram of word lengths:\n");
    for (int i = 1; i <= MAX_LENGTH; i++) {
        printf("%2d | ", i);
        for (int j = 0; j < wordLengths[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
