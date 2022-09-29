//PROGRAM TO FIND FACTORIAL OF A GIVEN NUMBER

#include<stdio.h>

void main()

{

    int i,n;
    unsigned long long fact = 1;

    printf("Enter an integer :");
    scanf("%d", &n);

    if(n<0) //If given number is negative
    {
        printf("Please enter a positive number.");
    }

    else
    {
        for(i=1;i<=n;i++)
        {
            fact *= i;
        }
    }

    printf("The factorial of %d is %llu",n,fact);

    getch();
}
