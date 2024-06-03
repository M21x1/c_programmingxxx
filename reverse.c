#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int myGetLine(char line[], int maxline);
void reverse(char s[]);

int main() {
    char line[MAXLINE]; /* current input line */
    int len;  /* current line length */

    while ((len = myGetLine(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
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

/* reverse: reverse the character string s */
void reverse(char s[]) {
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    --i; // point to the last character in the string

    if (s[i] == '\n') {
        --i; // skip the newline character if present
    }

    j = 0;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        ++j;
        --i;
    }
}

