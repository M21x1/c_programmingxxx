#include <stdio.h>

int AllSum(int n);

int main(void)
{
    int in;
    int sum = 0;        // DO NOT FORGET TO INITIALIZE!

    printf("Input a number: ");
    scanf("%d", &in);

    sum = AllSum(in);
    printf("The AllSum of %d is %d\n", in, sum);
}

int AllSum(int n)
{
    int result = 0;     // DO NOT FORGET INITIALIZE!! WHEN NOT IT CAUSES SEMANTIC ERROR OR INITIALIZATION ERROR 
    int i;

    for (i = 1; i <= n; i++)
        result = result + i;
    
    return result;
}