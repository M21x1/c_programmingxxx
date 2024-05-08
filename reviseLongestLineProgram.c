#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation

#define INITIAL_MAXLINE 100 /* initial size for line buffer */
#define MAX_INCREMENT 100    /* maximum increment for line buffer expansion */

char *myGetLine(void);
void reverse(char s[]);

int main() {
    char *line; /* current input line */
    int len;    /* current line length */

    while ((line = myGetLine()) != NULL) {
        len = 0;
        while (line[len] != '\0' && line[len] != '\n') // find the length of the line
            len++;
        reverse(line);
        printf("%s", line);
        free(line); // free memory allocated for the line
    }

    return 0;
}

/* myGetLine: read a line into dynamically allocated memory, return pointer to line */
char *myGetLine(void) {
    int c;
    int size = INITIAL_MAXLINE;
    int len = 0;
    char *line = (char *)malloc(size * sizeof(char)); // allocate initial memory

    if (line == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    while ((c = getchar()) != EOF && c != '\n') {
        line[len++] = c;
        if (len == size - 1) { // if buffer is full, expand it
            size += MAX_INCREMENT;
            line = (char *)realloc(line, size * sizeof(char));
            if (line == NULL) {
                printf("Memory reallocation failed.\n");
                exit(1);
            }
        }
    }

    if (c == '\n') {
        line[len++] = c;
    }
    line[len] = '\0'; // null-terminate the string

    if (len == 0 && c == EOF) { // no input read
        free(line);
        return NULL;
    } else {
        return line;
    }
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
