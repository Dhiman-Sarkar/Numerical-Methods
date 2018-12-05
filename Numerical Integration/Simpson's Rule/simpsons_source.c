// Numerical Integration using Simpson's Rule
// Given Function f(x) = 1/(1+x^2)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//Defining the Integral
float f(float x)
{
    float fx= 1/(1+x*x);  // f(x)=1/(1+x^2)
    return fx;
}

void main()
{
    printf ("## Numerical Integration using Simpson's Rule ##\n\n");

    float xMin, xMax, area;

    printf ("Please enter the lower limit of x : ");
    scanf ("%f", &xMin);
    printf("\nPlease enter the uppper limit of x : ");
    scanf ("%f", &xMax);

    printf("\n\n");

    // Applying Simpson's Rule
    area = ((xMax-xMin)/6) * (f(xMin)+f(xMax)+4*f((xMin-xMax)/2));

    printf("Area of the curve under (%f,%f) is :: %f",xMin,xMax,area);

    getch();
}