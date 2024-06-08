#include <stdio.h>

// Swap has no return value thus is declared as VOID

void Swap(int firstVal, int secondVal);

int main(void)
{
    int valueA = 3;
    int valueB = 4;

    printf("Before Swap ");
    printf("valueA = %d and valueB = %d\n", valueA, valueB);

    Swap(valueA, valueB);

    printf("After Swap ");
    printf("valueA = %d and valueB = %d\n", valueA, valueB);
}

void Swap(int firstVal, int secondVal)
{
    int tempVal;        // Holds firstVal when swapping

    tempVal = firstVal;
    firstVal = secondVal;
    secondVal = tempVal;
}

// WARNING THE PROGRAM DOES NOT DO THE TRICK BECAUSE RUN-TIME STACK ISSUES.
// THE CALLEE CAN NOT ACCESS THE ADDRESSES USED IN MAIN FUNCTION (THE CALLER)