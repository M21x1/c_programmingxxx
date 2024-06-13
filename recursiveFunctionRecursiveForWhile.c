#include <stdio.h>

int RunningSum(int *n);

int main(void)
{
    int number;
    int sum;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    sum = RunningSum(&number);
    printf("The sum is %d. ", sum);
}


// WITH A RECURSION

/*int RunningSum(int n)
{
    if (n == 1)
        return 1;
    else
        return (n + RunningSum(n - 1)); // + can be changed by *, /, -
}*/

// WITH A FOR LOOP

/*int RunningSum(int n)
{
    int i;
    int sum = 0;  // initialize sum to 0 

    for (i = 1; i <= n; i++)    // Use i<= n to include n in the sum
        sum += i;               // Acumulate sum
    return sum;                 // Return the acumulated sum 
}*/

// WITH A WHILE LOOP

int RunningSum(int *n)
{
    int min = 1;
    int sum = 0;
    int upper;
    int lower;
    
    lower = min;
    upper = *n;
    while (lower <= upper)
    {
        sum += lower;
        lower++;
    }
    return sum;
}