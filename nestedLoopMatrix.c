#include <stdio.h>

int main(void){

    // Outer Loop
    for (int multiplicand = 0; multiplicand < 10; multiplicand++){
        // Inner Loop
        for (int multiplier = 0; multiplier < 10; multiplier++)
            printf("%d\t", multiplier * multiplicand);
            printf("\n");

    }

}