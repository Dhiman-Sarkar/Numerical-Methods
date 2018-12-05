// Solving Polynomial Equation by using Newton-Rhapson Method
// Given Function f(x) = x^3 -x^2 +2

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>


// Function Prototype
float F(float x); // Original Function
float f(float x); // Differential Coefficient of F(x)
float tolerance(float x1, float x2);
int NR_method (float x1, float TOL);

// main() Function
void main()
{
    float TOL, x1;  //TOL = Desiered Tollerence X1,X2=Initial boundary
    printf("####### This Program is to solve a equation by Newton-Rhapson Method #######\n\n");
    printf("Please enter Tolerance : ");
    scanf("%f",&TOL);

    printf("\nEnter the initial approximation of the solution :: ");
	scanf("%f", &x1);

    NR_method(x1,TOL);

    getch();
}


// Defining function f(x) | F(x) stands for anti-derivative i.e. the given function
float F(float x)
{
    float Fx = x*x*x - x*x +2;   // Difine f(x)
    return Fx;
}

// Defining Differential Co-efficiant
float f(float x)
{
    float fx = 3*x*x -4*x;  // Define f'(x)
    return fx;
}

//Defining Tolerance function
float tolerance(float x1, float x2)
{
    float TOL = fabs(x2-x1);
    return TOL;
}


//Defining Bisection Method
int NR_method (float x1, float TOL)
{
    float x2;
    int n;  //n=number of itteration

    for(n=1; n>0; n++)
	{
		x2 = x1 - F(x1)/f(x1);  // p[n] = p[n-1]-f(p[n-1])/f'(p[n-1])

		if (tolerance(x1,x2)<=TOL)
		{
			printf("\nSolution of the Polynomial equation is :: %f", x2); 
            printf("\nNumber of Iteration :: %d\n\n", n); 
			break;
		}
        else x1=x2;
	}
}
