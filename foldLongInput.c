#include <stdio.h>

#define MAXLINE 1000    // Maximum input line size
#define FOLD_COLUMN 10  // Column number to fold input lines

void fold_line(char line[], int fold_column);

int main() {
    int c;
    char line[MAXLINE];
    int line_length = 0;

    while ((c = getchar()) != EOF) {
        if (line_length == MAXLINE - 1 || c == '\n') { // Check if line buffer is full or newline encountered
            line[line_length] = '\0'; // Terminate the string
            fold_line(line, FOLD_COLUMN); // Fold the line
            line_length = 0; // Reset line length for next line
        }

        line[line_length++] = c; // Store character in line buffer
    }

    return 0;
}

void fold_line(char line[], int fold_column) {
    int i, last_space;

    for (i = 0; line[i] != '\0'; ++i) {
        if (i >= fold_column && line[i] != ' ' && line[i] != '\t') { // Check if at fold column and character is not a space or tab
            if (last_space == -1) { // No space found before fold column
                printf("%.*s-\n", fold_column, line); // Print up to fold column with hyphen and newline
                printf("%s", line + fold_column); // Print remaining characters
                break;
            } else { // Space found before fold column
                printf("%.*s\n", last_space, line); // Print up to last space with newline
                printf("%s", line + last_space + 1); // Print remaining characters
                break;
            }
        }
        if (line[i] == ' ' || line[i] == '\t') // Update last space position
            last_space = i;
    }

    if (line[i] == '\0') // Print the remaining characters if the loop terminates without breaking
        printf("%s\n", line);
}
