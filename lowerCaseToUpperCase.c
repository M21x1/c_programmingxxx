#include <stdio.h>

char ToUpperChar(char inchar);      // Function Declaration

// Prompt for a line of text, Read one character, 
// convert to uppercase, print it out, then get another

int main(void)
{
    char echo = 'A';    // Initialize input character
    char upcase;        // Converted character 

    printf("Type input: ");
    while (echo != '\n'){
        scanf("%c", &echo);
        upcase = ToUpperChar(echo);
        printf("%c", upcase);
    }      
}


// If the parameter is lowercase, return
// its uppercase ASCII value

char ToUpperChar(char inchar){
    char outchar;

    if ('a'<= inchar && inchar<= 'z')
        outchar = inchar - ('a' - 'A');     // THE PART THAT MAKED THE TRICK!!! 
    else        // the difference between any letter from a to z and its capital is always 32 (operated in ASCII code)                                
        outchar = inchar; // for instance, b (in ASCII is 98) and B (ASCII 66)...b - B = 32 and inchar= b...b(98) - 32 = 66(B)
    
    return outchar;
}