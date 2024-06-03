/*#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");  // Print escape sequence for tab
        } else if (c == '\b') {
            printf("\\b");  // Print escape sequence for backspace
        } else if (c == '\\') {
            printf("\\\\");  // Print escape sequence for backslash
        } else {
            putchar(c);  // Print any other character directly
        }
    }

    return 0;
}
