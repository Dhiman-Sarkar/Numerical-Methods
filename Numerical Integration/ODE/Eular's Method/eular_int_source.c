// Solving a ODE by using Eular's Method
// Given function f'(x) = 3x^2 +1 

#include<stdio.h>
#include<conio.h>

float eular_int_soln(float xi, float yi, float xf, float h);

float dYdX (float x)
{
    float dYdX = 3*x*x +1;
    return dYdX;
}

void main()
{
    printf("## Solving first ordinary differential equation by using Eular's Method ##\n\n");

    float xi, yi, xf, h;

    printf("Please Enter the ititial value conditions\n");
    printf("Initial valu of x >>");
    scanf("%f",&xi);
    printf("Initial value of y at x=%f >>",xi);
    scanf("%f",&yi);
    printf("\nPlease Enter the Final value of x\n>>");
    scanf("%f",&xf);
    printf("Please Enter the step size >>");
    scanf("%f",&h);

    eular_int_soln(xi,yi,xf,h);

    getch();
}

//Defining Eular's Method of solution
float eular_int_soln(float xi, float yi, float xf, float h)
{
    float x, y;

    x=xi;
    y=yi;

    for(x; x<=xf; x=x+h)
    {
        y = y + h*dYdX(x);
    }

    printf("\nSolution for y at x=%f is :: %f",x,y);

    return 0;
}