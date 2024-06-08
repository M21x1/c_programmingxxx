#include <stdio.h>

int main(void)
{
    int iterations;     // Input value

    printf("How many iterations? ");
    scanf("%d", &iterations);

    for (int i = 1; i <= iterations; i++)
        printf("Executing iteration %d\n", i);
}