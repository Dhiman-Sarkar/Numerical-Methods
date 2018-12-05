// Find the greatest number and its postition from a given set of numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("## Find the greatest number and its postition from a given set of numbers ##\n\n");

    int n, pos, i;
    printf("How many numbers are there?\n>>");
    scanf("%d",&n);

    float number[n], grtst_num;

    for(i=0; i<n; i++)
    {
        printf("Enter the %dth Number >>",i+1);
        scanf("%f",&number[i]);
    }

    // Finding the Greatest number and its Position
    grtst_num = number[0]; //Initilizing comparison with the first number
    pos=1;
    for(i=1; i<n; i++)
    {
        if(number[i]>=grtst_num) 
        {
            grtst_num = number[i];
            pos = i+1;
        }
        else ;
    }

    printf("\nThe Greatest number is :: %f and it's at the %dth Position", grtst_num, pos);

    getch();
}