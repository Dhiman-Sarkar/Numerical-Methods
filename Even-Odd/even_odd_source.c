// Finding the Sum and Average of the all Even or Odd numbers from the first given n Natural Numbers

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    printf("## Find the Sum of all the Even or Odd numbers from the first n Natural Numbers ##");

    char choice[5];
    int n, sum=0, avg, i, j=0; // n= Number of Natural Numbers, i=General purpose initilizer, j=Number Count

    printf("\n\nPlease enter the last natural number : ");
    scanf("%d",&n);
    
start: //For restart purpose

    printf("\nWhich type of numbers (Even/Odd) do you want to calculate the sum from first %d Natural numbers? (even/odd) \nAnswer : ",n);
    scanf("%s",choice);

    if(strcmp(choice, "even") == 0) i=2;
    else if(strcmp(choice, "odd") == 0) i=1;
    else {printf("Error!"); goto start;}

    for(i; i<=n; i=i+2)
    {
    	j++;
        sum=sum+i;
        avg=sum/j;
    }

    printf("\n\nSum of all the %s numbers from the first %d Natural Numbers is : %d", choice, n, sum);
    printf("\n\nAverage of all the %s numbers (%d numbers) from the first %d Natural Numbers is : %d",choice,j,n,avg);
	
	printf("\n\n");
    getch();
}
