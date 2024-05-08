#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void remove_comments(char line[], int length);

int main() {
    char line[MAXLINE];
    int len;

    while ((len = get_line(line, MAXLINE)) > 0) {
        remove_comments(line, len);
        printf("%s", line);
    }

    return 0;
}

int get_line(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void remove_comments(char line[], int length) {
    int i;
    int in_comment = 0;
    int in_quote = 0;
    char prev_char = '\0';

    for (i = 0; i < length; ++i) {
        if (!in_comment && line[i] == '"' && prev_char != '\\')
            in_quote = !in_quote;
        else if (!in_quote && line[i] == '/' && prev_char == '/') {
            line[i - 1] = '\n';
            line[i] = '\0';
            break;
        } else if (!in_quote && line[i] == '*' && prev_char == '/') {
            in_comment = 1;
            line[i - 1] = ' ';
            line[i] = ' ';
        } else if (!in_quote && line[i] == '/' && prev_char == '*' && in_comment) {
            in_comment = 0;
            line[i] = ' ';
        }

        prev_char = line[i];
    }
}
