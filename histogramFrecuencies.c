#include <stdio.h>

#define NUM_CHARS 128 // Number of ASCII characters

int main() {
    int charCounts[NUM_CHARS] = {0}; // Array to store character frequencies
    int c;

    // Read input and count character frequencies
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < NUM_CHARS) {
            charCounts[c]++;
        }
    }

    // Print histogram
    printf("Histogram of character frequencies:\n");
    for (int i = 0; i < NUM_CHARS; i++) {
        if (charCounts[i] > 0) {
            printf("%c | ", i); // Print the character
            for (int j = 0; j < charCounts[i]; j++) {
                printf("*"); // Print '*' characters representing the frequency
            }
            printf("\n");
        }
    }

    return 0;
}
