#include <stdio.h>

// function declarations
double AreaOfCircle(double radius);

int main(void)
{
    double outer;       // Outer radius
    double inner;       // Inner radius
    double areOfRing;   // Area of ring

    printf("Enter inner radius: ");
    scanf("%lf", &inner);           // lf format allows to input integer number to be operated with floating numbers

    printf("Enter outer radius: ");
    scanf("%lf", &outer);

    areOfRing = AreaOfCircle(outer) - AreaOfCircle(inner);
    printf("The area of the ring is %f\n", areOfRing);
}

// Calculate area of circle given a radius

double AreaOfCircle(double radius)
{
    double pi = 3.14159265;          // This can be optionally declared as a constant

    return pi * radius * radius; 
}