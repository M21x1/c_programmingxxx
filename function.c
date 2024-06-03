#include <stdio.h>

void printFahrenheitCelsiusTable(int lower, int upper, int step) {
    int fahr, celsius;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
}

int main() {
    int lower = 0;    /* lower limit of temperature scale */
    int upper = 300;  /* upper limit */
    int step = 20;    /* step size */

    printFahrenheitCelsiusTable(lower, upper, step);

    return 0;
}
