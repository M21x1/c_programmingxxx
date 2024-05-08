#include <stdio.h>

/* power: raise base to n-th power; n >=0; version 2 */

int power(int base, int n){
    int p;
    for (p=1; n>0; --n){
        p = p*base;
    }
    return p;  /* inside the loop it would only iterate once, keep it in mind the position of return*/

}

int main() {
    int base = 2;
    int exponent = 5;
    int result = power(base, exponent);
    
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    
    return 0;
    }




/* power: raise base to n-th power; n >= 0; version 2 */
/*int power(int base, int n) {
    int result = 1; // Initialize result to 1
    for (; n > 0; --n) {
        result *= base; // Multiply result by base
    }
    return result;
}

int main() {
    int base = 2;
    int exponent = 5;
    int result = power(base, exponent);
    
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    
    return 0;
}

*/