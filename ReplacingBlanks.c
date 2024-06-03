#include <stdio.h>

int main() {
    int c;
    char prev_was_blank = 0;  // Flag to track previous character

    while ((c = getchar()) != EOF) {
        if (c == ' ' && !prev_was_blank) {
            putchar(c);  // Print a single blank if not preceded by a blank
        } else if (c != ' ') {
            putchar(c);  // Print any non-blank character
        }
        prev_was_blank = (c == ' ');  // Update flag for next iteration
    }

    return 0;
}
