#include <stdio.h>

int main(void){
    // Loop counter variable i

    int i;

    printf("Multiplication Table of 9\n");
    printf("-------------------------\n");

    // Loop from 0 to 10 (inclusive) to print the table
    for (i = 0; i<= 10; i++){
        printf("%d * 9 = %d\n", i, i * 9);
    }
}