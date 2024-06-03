#include <stdio.h>
#include <stdlib.h>

#define INITIAL_MAXLINE 1000 /* initial size for line buffer */

char *myGetLine(void); /* read a line into dynamically allocated memory */

int main() {
    char *line;
    int len;
    int max = 0;

    while ((line = myGetLine()) != NULL) {
        len = 0;
        while (line[len] != '\0') {
            len++;
        }
        if (len > max) {
            max = len;
            printf("Length of longest line: %d\n", max);
            printf("Longest line: %s\n", line);
        }
        free(line); // Free the dynamically allocated memory
    }

    return 0;
}

char *myGetLine(void) {
    int maxline = INITIAL_MAXLINE;
    int c, i = 0;
    char *line = (char *)malloc(maxline * sizeof(char)); /* allocate initial buffer */

    if (!line) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    while ((c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
        if (i == maxline) { /* if line buffer is full, resize */
            maxline *= 2;
            line = (char *)realloc(line, maxline * sizeof(char));
            if (!line) {
                fprintf(stderr, "Memory allocation failed\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    if (c == '\n') {
        line[i++] = c;
    }

    line[i] = '\0';

    if (i == 0 && c == EOF) { /* handle empty input */
        free(line);
        return NULL;
    }

    return line;
}
