// Numerical Integration using Trapezoidal Rule
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

void trapezoidal(float xMin, float xMax, float n)
{
    int i; //General purpose initializer
    float h = (xMax-xMin)/n; // h = step size
    float area, marginal_sections_area, middle_sections_area=0;

    for(i=1; i<n-1; i++)
    {
        middle_sections_area = middle_sections_area + f(xMin + i*h);
    }
    marginal_sections_area = f(xMin) + f(xMax);
    area = (h/2)*(marginal_sections_area + 2*middle_sections_area);
    
    printf("Area between (%f,%f) is : %f",xMin,xMax,area);
}

void main()
{
    printf ("## Numerical Integration using Trapezoidal Rule ##\n\n");

    float xMin, xMax;
    int n;

    printf ("Please enter the lower limit of x : ");
    scanf ("%f", &xMin);
    printf("\nPlease enter the uppper limit of x : ");
    scanf ("%f", &xMax);
    printf ("\nPlease enter the total number of sections :");
    scanf ("%d", &n);
    printf("\n\n");

    trapezoidal(xMin,xMax,n);

    getch();
}