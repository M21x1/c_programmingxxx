#include <stdio.h>

/* power: raise base to n-th power; n >=0; version 2 */

int power(int base, int n){
    int p;
    for (p=1; n>0; --n){
        p = p*base;
    return p;
    }

}

int main() {
    int base = 2;
    int exponent = 5;
    int result = power(base, exponent);
    
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    
    return 0;
    }