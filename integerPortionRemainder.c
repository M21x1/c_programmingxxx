#include <stdio.h>

int IntDivide(int x, int y, int *quoPtr, int *remPtr);

int main(void)
{
    int dividend;       // The number to be divided 
    int divisor;        // The number to divide by
    int quotient;       // Integer result of division
    int remainder;      // Integer remainder of division
    int error;          // Did something go wrong?

    printf("Input dividend: ");
    scanf("%d", &dividend);
    printf("Input divisor: ");
    scanf("%d", &divisor);

    error = IntDivide(dividend, divisor, &quotient, &remainder);

    if (!error)             // !error indicates no error
        printf("Answer: %d remainder %d\n", quotient, remainder);   // here we just mention the variable
    else                                                            
        printf("IntDivide failed.\n");
}

int IntDivide(int x, int y, int *quoPtr, int *remPtr)
{
    if (y != 0){
        *quoPtr = x / y;    // Modify *quoPtr
        *remPtr = x % y;    // Modify *remPtr
        return 0;
    }
    else
        return -1;
}

// x/y(value) in "callee function"  ---> *quoPtr(address) in callee function ---> pointer gets the address in "caller function" &quotient ---> assigns the value got in *quoPtr
// x%y(value) in "callee function" ---> *remPtr(address) in callee function ---> pointer gets the address in "caller function" &remainder ---> assigns the value got in *remPtr 