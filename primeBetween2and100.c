#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool prime = true;

    // Start at 2 and go until 100
    for (int num = 2; num <= 100; num++){
        prime = true; //     Assume the number is prime

        // Test if the candidate number is a prime
        for (int divisor = 2; divisor <= 10; divisor++)
            if (((num % divisor) == 0) && num != divisor)   // we filter even numbers and make sure dividend and divisor are different
                prime = false;
        
        if (prime)
            printf("The number %d is prime\n", num);

    }
}