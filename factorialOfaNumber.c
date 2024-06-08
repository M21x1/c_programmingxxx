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

// WITHOUT CONSIDERING SPECIFICATIONS
//int Factorial(int n)            // Function definition
//{
  //  int result = 1;             // Initialized result

    //for(int i = 1; i <= n; i++) // Calculate factorial
      //  result = result * i;
    
    //return result;              // Return to caller (/from CALLEE TO CALLER). THE CALLE SENDS THE RESULT TO THE CALLER
//}

// WITH SPECIFICATIONS

int Factorial(int n)            // Function definition
{
    int result = 1;             // Initialized result

    if ((n < 1) || (n > 31))    // Bad parameter. According to specification n > 0 (factorial definition) and n! > 2^31 (number of bits to represent a number)
        return -1;
    
    for (int i = 1; i <= n; i++)
        result = result * i;
    
    return result;
    
}