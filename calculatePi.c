#include <stdio.h>

int main(void){
    int numOfTerms;     // Number of terms to evaluate
    double pi = 0;      // Aproximation of pi

    printf("Number of terms (must be 1 or larger) : ");
    scanf("%d", &numOfTerms);

    for (int count = 1; count <= numOfTerms; count++){
        if (count % 2)  // this activates whenever count%2 is NON ZERO, in other words, the conditional is true or odd(it has a remainder)
            pi = pi + (4.0 / (2.0 * count - 1));    // Odd term
        else
            pi = pi - (4.0 / (2.0 * count - 1));    // Even term
    }
    printf("The aproximate value of pi is %f\n", pi);
}