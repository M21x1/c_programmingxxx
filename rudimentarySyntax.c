#include <stdio.h>

#define MAXLINE 1000

int check_syntax(char line[], int length);

int main() {
    char line[MAXLINE];
    int len;

    while ((len = check_syntax(line, MAXLINE)) > 0) {
        // If there are unmatched parentheses, brackets, or braces
        if (len < 0) {
            printf("Syntax error detected!\n");
            return 1;
        }
    }

    printf("Syntax check passed!\n");
    return 0;
}

int check_syntax(char line[], int length) {
    int i, c;
    int paren_count = 0;
    int bracket_count = 0;
    int brace_count = 0;
    int in_quote = 0; // 0: not in quote, 1: in single quote, 2: in double quote
    int in_comment = 0; // 0: not in comment, 1: in single-line comment, 2: in block comment

    for (i = 0; i < length - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;

        if (!in_comment) {
            if (c == '\'' && in_quote != 2) {
                if (in_quote == 0)
                    in_quote = 1;
                else if (in_quote == 1)
                    in_quote = 0;
            } else if (c == '\"' && in_quote != 1) {
                if (in_quote == 0)
                    in_quote = 2;
                else if (in_quote == 2)
                    in_quote = 0;
            }

            if (in_quote == 0) {
                if (c == '(')
                    ++paren_count;
                else if (c == ')')
                    --paren_count;
                else if (c == '[')
                    ++bracket_count;
                else if (c == ']')
                    --bracket_count;
                else if (c == '{')
                    ++brace_count;
                else if (c == '}') {
                    --brace_count;
                    if (brace_count < 0)
                        return -1; // Unmatched closing brace
                }
                else if (c == '/') {
                    int next_char = getchar();
                    if (next_char == '/') // Single-line comment
                        in_comment = 1;
                    else if (next_char == '*') // Block comment
                        in_comment = 2;
                    else
                        ungetc(next_char, stdin); // Put back the character
                }
            } else if (c == '\\') { // Handle escape sequences
                ++i; // Skip next character
            }
        } else if (in_comment == 1 && c == '\n')
            in_comment = 0;
        else if (in_comment == 2 && c == '*' && getchar() == '/')
            in_comment = 0; // End of block comment
    }

    if (paren_count != 0 || bracket_count != 0 || brace_count != 0)
        return -1; // Unmatched parentheses, brackets, or braces

    line[i] = '\0'; // Terminate the string
    return i;
}
