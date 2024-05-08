#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define MIN_LENGTH 80 /* minimum line length to be printed */

int myGetLine(char line[], int maxline);

int main() {
    char line[MAXLINE]; /* current input line */
    int len;            /* current line length */

    while ((len = myGetLine(line, MAXLINE)) > 0) {
        if (len > MIN_LENGTH) {
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
