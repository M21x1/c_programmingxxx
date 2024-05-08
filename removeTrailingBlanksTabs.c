#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000 /* maximum input line length */

int myGetLine(char line[], int maxline);
void removeTrailingBlanks(char line[], int length);

int main() {
    char line[MAXLINE]; /* current input line */
    int len;  /* current line length */

    while ((len = myGetLine(line, MAXLINE)) > 0) {
        removeTrailingBlanks(line, len);
        if (line[0] != '\n') { // Check if the line is not entirely blank
            printf("%s", line);
        }
    }

    return 0;
}

/* myGetLine: read a line into s, return length */
int myGetLine(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* removeTrailingBlanks: remove trailing blanks and tabs from a line */
void removeTrailingBlanks(char line[], int length) {
    bool inWhitespace = false;
    int i;

    for (i = length - 2; i >= 0; --i) { // Start from the second-to-last character
        if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
            if (!inWhitespace) {
                inWhitespace = true;
            }
        } else {
            if (inWhitespace) {
                inWhitespace = false;
                line[i + 1] = '\n'; // Replace trailing whitespace with newline
                line[i + 2] = '\0'; // Terminate the string after newline
                return;
            }
        }
    }
}
