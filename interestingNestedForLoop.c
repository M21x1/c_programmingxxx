#include <stdio.h>

int main(void){
    int sum = 0;    // Initial the result variable
    int input;      // Holds input user

    // Get input
    printf("Hi!, Would you input an integer? ");
    scanf("%d", &input);

    // Perform calculation
    for (int outer = 1; outer <= input; outer++){
        for (int inner = 0; inner < outer; inner++){
            sum +=inner;
        }
    }

    // Output result
    printf("The result is %d\n", sum);
}