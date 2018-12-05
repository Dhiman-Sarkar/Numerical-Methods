// Finding the Velocity and Accleration from a given set of data of Position and Time by using Backward Difference Numerical Differentiation

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

// Function to calculate Velocity and Accleration
float state(int n)
{
    int i; // General purpose initializer

    float r[n], t[n], v[n], a[n];

    n=n-1; //Counting from 0

    printf("     Time            Position\n");
    printf("--------------     --------------\n\n");
    for(i=0; i<=n; i++)
    {
        printf("    t[%d] = ",i+1);
        scanf("%f",&t[i]);
        printf("                     r[%d] = ",i+1);
        scanf("%f",&r[i]);
    }
    //Calculating v[n]
    for(i=n; i>=1; i--)
    {
        v[i] = (r[i-1]-r[i])/(t[i-1]-t[i]);
    }
    //Calculating a[n]
    for(i=n; i>=2; i--)
    {
        a[i] = (v[i-1]-v[i])/(t[i-1]-t[i]);
    }

    
    printf("   Time              Position             Velocity            Accleration\n");
    printf("-----------        -------------        ------------         -------------\n\n");
    for(i=0; i<1; i++)
    {
        printf("  %f           %f                              \n",t[i],r[i],v[i]);
    }
    for(i=1; i<2; i++)
    {
        printf("  %f           %f            %f                \n",t[i],r[i],v[i]);
    }
    for(i=2; i<n; i++)
    {
        printf("  %f           %f            %f              %f\n",t[i],r[i],v[i],a[i]);
    }
}

//main() Function
void main()
{
    printf("## Finding the Velocity and Accleration from a given set of data of Position and Time by using Backward Difference Numerical Differentiation ##\n\n");

    int n; // n = Number of dataset

    printf("Please enter the total number of datasets :");
    scanf("%d",&n);

    state(n);

    printf("\n\n");
    getch();
}