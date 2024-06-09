#include <stdio.h>
#define MAX_NUMS 10

int Average(int input_values[]);

int main(void)
{
    int mean;                   // average of numbers
    int numbers[MAX_NUMS];      // Original input numbers

    // Get input
    printf("Enter %d numbers.\n", MAX_NUMS);
    for (int index = 0; index < MAX_NUMS; index++){
        printf("Input number %d : ", index);
        scanf("%d", &numbers[index]);
    }   

    mean = Average(numbers);        // An ARRAY doesnt need & (address giver) numbers is equivalent to &numbers[0] and its type is asign at the beginning in Average(int input_values[])

    printf("The average of these numbers is %d\n", mean);
}

int Average(int inputValues[])
{
    int sum = 0;

    for (int index = 0; index < MAX_NUMS; index++){
        sum = sum + inputValues[index];
    }

    return (sum/MAX_NUMS);
}

