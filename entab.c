#include <stdio.h>

#define TABSTOP 4 // Define the tab stop spacing

int main() {
    int c, pos, spaces;

    pos = 0; // Initialize position counter
    spaces = 0; // Initialize space counter

    while ((c = getchar()) != EOF) {
        if (c == ' ') { // If a space is encountered
            ++spaces; // Increment space counter
            ++pos; // Increment position counter
        } else if (c == '\t' || c == '\n') { // If a tab or newline character is encountered
            putchar(c); // Output tab or newline character
            pos = 0; // Reset position counter
            spaces = 0; // Reset space counter
        } else { // If a non-space character is encountered
            // Output tabs and spaces equivalent to spaces encountered
            while (spaces > 0) {
                int tabs = spaces / TABSTOP; // Calculate number of tabs needed
                int blanks = spaces % TABSTOP; // Calculate number of spaces needed
                for (int i = 0; i < tabs; ++i)
                    putchar('\t'); // Output tabs
                for (int i = 0; i < blanks; ++i)
                    putchar(' '); // Output spaces
                spaces = 0; // Reset space counter
            }
            putchar(c); // Output non-space character
            ++pos; // Increment position counter
        }

        // Check if the current position is a tab stop
        if (c == '\n' || pos % TABSTOP == 0) {
            spaces = 0; // Reset space counter
        }
    }

    return 0;
}
