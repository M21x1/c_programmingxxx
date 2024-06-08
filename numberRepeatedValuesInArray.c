#include <stdio.h>
#define MAX_NUMS 10

int main(void)
{
    int repIndex;               // Loop variable for rep loop
    int numbers[MAX_NUMS];      // Original input numbers
    int repeats[MAX_NUMS];      // Number of repeats

    // Get input
    printf("Enter %d numbers.\n", MAX_NUMS);
    for (int index = 0; index < MAX_NUMS; index++){
        printf("Input number %d : ", index);
        scanf("%d", &numbers[index]);
    }

    // Scan through entire array, counting number of 
    // repeats per element within the original array
    for (int index = 0; index < MAX_NUMS; index++){
        repeats[index] = 0;     // We initialize every value's repeat to 0
        for (int repindex = 0; repindex < MAX_NUMS; repindex++){
            if (numbers[repindex] == numbers[index])
                repeats[index]++;
        }
    }

    // Print the results without filtering or printing it more than once
    // for (int index = 0; index < MAX_NUMS; index++)
    //    printf("Original number %d. Number of repeats %d\n", numbers[index], repeats[index]);

    // print the results filter
    for (int index = 0; index < MAX_NUMS; index++){
        // check if this number's already been printed
        int japrinted = 0;
        for (int japrintedindex = 0; japrintedindex < index; japrintedindex++){ // The upper limit must be the "index" of filtered numbers
            if (numbers[japrintedindex] == numbers[index]){                     // Remember the updater index(++) stops when it gets to 10, in this case whenever japrintedindex gets to 8
                japrinted = 1;                                                  // WE ONLY CONSIDER THE "index" OF THOSE REPEATED NUMBERS. 
                break;
            }
        }

        // If not already printed, print it 
        if (!japrinted)
            printf("Original number %d. Number of repeats %d\n", numbers[index], repeats[index]);
    }

}