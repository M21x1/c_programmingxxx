#include <stdio.h>

int Factorial(int n);          // Function declaration(CALLEE)

int main(void)                  //Definition for main(CALLER)
{
    int number;                 // Number from user
    int answer;                 // Answer of factorial

    printf("Input a number: "); // Call to printf

    scanf("%d", &number);       // Call to scanf

    answer = Factorial(number);  // Call to factorial(calling for CALLEE). THE CALLER GAVE THE ARGUMENT TO THE CALLEE

    printf("The factorial of %d is %d\n", number, answer);

}

int Factorial(int n)            // Function definition
{
    int result = 1;             // Initialized result

    for(int i = 1; i <= n; i++) // Calculate factorial
        result = result * i;
    
    return result;              // Return to caller (/from CALLEE TO CALLER). THE CALLE SENDS THE RESULT TO THE CALLER
}