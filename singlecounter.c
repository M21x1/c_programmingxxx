#include<stdio.h>
#define STOP 0
// just a simple counter

int main(void){
    int counter;
    int startPoint;

    printf("===== Countdown Program =====\n");
    printf("My friend, enter a positive integer:");
    scanf("%d", &startPoint);

    for(counter = startPoint; counter >= STOP; counter--)
        printf("%d\n", counter);
}

// scanf("%c", &nextchart), scanf("%f", &radius), scanf("%d %d", &length, &width)
// printf("43+59 in decimal is %d", 43+59)
//printf("43+ 59 in hexadecimal is %x", 43+59)
// printf("43+59 as a character is %c", 43+59)