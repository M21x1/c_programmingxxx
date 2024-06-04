#include <stdio.h>

int main(void){
    int howMuch;    // The number of bytes to be transferred
    int rate;       // The average network transfer rate 
    int time;       // The time, in seconds, for the transfer
    int hours;      // The number of hours for the transfer
    int minutes;    // The number of mins for the transfer
    int seconds;    // The number os secs for the transfer

    // Get input: number of bytes and network transfer rate
    printf("Hi!, how many bytes of data do you want to transfer?");
    scanf("%d", &howMuch);
    printf("What is the transfer rate (in bytes/sec)?");
    scanf("%d", &rate);

    // Calculate total time in seconds
    time = howMuch / rate;

    // Convert time into hours, minutes, seconds
    hours = time / 3600;            // 3600 seconds in an hour
    minutes = (time % 3600) / 60;   // 60 seconds in a minute
    seconds = ((time % 3600) % 60);  // remainder is seconds

    // Output results
    printf("Time: %dh %dm %ds\n", hours, minutes, seconds);
}