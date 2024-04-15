#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    int c;
    int in_word = 0;  // Flag to track if currently in a word

    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            if (in_word) {  // End of a word
                putchar('\n');
                in_word = 0;
            }
        } else {
            putchar(c);
            in_word = 1;  // Start of a word
        }
    }

    // Handle the last word if the input ends without a trailing newline
    if (in_word) {
        putchar('\n');
    }

    return 0;
}
