// Solving Polynomial Equations using Secant Method
// Given Function f(x) = x^3 -x^2 -2=0

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

#define ERROR .0001


// Function Prototype
float f(float x);
float tolerance(float x1, float x2);
int secant_method (float x1, float x2, float TOL);

// main() Function
void main()
{
    float TOL, x1, x2;  //TOL = Desiered Tollerence X1,X2=Initial boundary
    printf("####### This Program is to solve a equation by Secant Method #######\n\n");
    printf("Please enter Tolerance : ");
    scanf("%f",&TOL);

START: //For Restart purpose

    printf("\nEnter the lower bound of the solution :: ");
	scanf("%f", &x1);
	printf("\nEnter the upper bound of the solution :: ");
	scanf("%f", &x2);

    if (secant_method(x1,x2,TOL)==0) goto START;
    else ;
    getch();
}


// Defining function f(x)
float f(float x)
{
    float fx = x*x*x -x*x +2;   // Define f(x)
    return fx;
}

//Defining Tolerance function
float tolerance(float x1, float x2)
{
    float TOL = fabs(x2-x1);
    return TOL;
}

//Defining Bisection Method
int secant_method (float x1, float x2, float TOL)
{
    float x3;
    int n;  //n=number of itteration

    if (f(x1)*f(x2)>0)
	{
		printf ("\nSolution doesn't exists in the domain (%f,%f)\n\n", x1,x2);
		return (0);

	}
	else ;

    for(n=1; n>0; n++)
	{
		x3 = x2 - (f(x2) * (x2-x1) / (f(x2)-f(x1)));

		if (tolerance(x1,x2)<=TOL || fabs(f(x3))<=ERROR)
		{
			printf("\nSolution of the Polynomial equation is :: %f", x3); 
            printf("\nNumbner of Iteration :: %d\n\n", n); 
			break;
		}
		else if (f(x1)*f(x3)<0) x2=x3;
		else if (f(x2)*f(x3)<0) x1=x3;
        else {printf("Error!!");return 0;}
	}
    return 1;
}
