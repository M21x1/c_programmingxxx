#include <stdio.h>

#define TABSTOP 4 // Define the tab stop spacing

int main() {
    int c, pos;

    pos = 0; // Initialize position counter

    while ((c = getchar()) != EOF) {
        if (c == '\t') { // If tab character is encountered
            int spaces = TABSTOP - (pos % TABSTOP); // Calculate number of spaces needed to reach next tab stop
            for (int i = 0; i < spaces; ++i) {
                putchar(' '); // Output spaces
                ++pos; // Increment position counter
            }
        } else if (c == '\n') { // If newline character is encountered
            putchar(c); // Output newline character
            pos = 0; // Reset position counter
        } else {
            putchar(c); // Output other characters
            ++pos; // Increment position counter
        }
    }

    return 0;
}
