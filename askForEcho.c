#include <stdio.h>

int main(void){
    char echo = 'A';    // Initialize char variable echo

    while (echo != '\n'){
        scanf("%c", &echo);
        printf("%c", echo);
    }
}