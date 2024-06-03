#include <stdio.h>

// verify getchar() != EOF is 0 or 1

int main(){
    int outcome;

    printf(" Enter a character: ");
    outcome = getchar() != EOF; // != is greater than = in priority

    printf(" The outcome of getchar() != EOF is: %d\n ", outcome);

    return 0;
}