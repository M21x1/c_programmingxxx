#include<stdio.h>
#define STOP 0

int main(void){
    int counter;
    int startPoint;

    printf("===== Countdown Program =====\n");
    printf("My friend, enter a positive integer:");
    scanf("%d", &startPoint);

    for(counter = startPoint; counter >= STOP; counter--)
        printf("%d\n", counter);
}