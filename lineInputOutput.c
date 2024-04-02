/*
#include <stdio.h>

#define length_line 150

int main(){
    char line[length_line]; // Character array to store the input line
    int lini;

    printf("Enter some character. Enter $ to exit...\n");
    while(line != '$')
    {
        lini = fgets(line, length_line, stdin); //stdin refers to the keyboard and the input done through it 
        printf("\n Entered line is: ");
        putchar(lini);
        printf("\n");
    }
    return 0;

}
*/

#include <stdio.h>

#define LENGTH_LINE 150

int main() {
    char line[LENGTH_LINE]; // Character array to store the input line
    char *lini; // Changed int to char pointer for fgets return type

    printf("Enter some characters. Enter $ to exit...\n");
    while (1) {
        lini = fgets(line, LENGTH_LINE, stdin);
        if (lini == NULL || line[0] == '$') // Check for end condition
            break;
        printf("\nEntered line is: %s\n", line);
    }
    return 0;
}
