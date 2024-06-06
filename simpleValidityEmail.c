#include <stdio.h>
#include <stdbool.h>

int main(void){
    char nextChar;          // Next character in e-mail address
    bool gotAt = false;     // Indicates if At @ was found
    bool gotDot = false;    // Indicates if Dot . was found

    printf("Enter your e-mail address: ");

    do {
        scanf("%c", &nextChar);

        if (nextChar == '@')        // In C "" is different than ''. Use '' for strings or texts.
            gotAt = true;
        
        if (nextChar == '.' && gotAt)
            gotDot = true; 
    }
    while (nextChar != ' ' && nextChar != '\n');

    if (gotAt && gotDot)
        printf("Your e-mail address appears to be valid.\n");
    else
        printf("Your e-mail address is not valid.\n");

}
