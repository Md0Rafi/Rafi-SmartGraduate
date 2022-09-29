//PROGRAM TO FIND THE GIVEN NUMBER IS POSITIVE OR NEGATIVE

#include<stdio.h>

void main()

{

    double n;

    printf("Enter a number :");
    scanf("%lf", &n);

    if(n<=0.0)
    {
        if(n == 0)
        {
            printf("The value you entered is 0");
        }
        else
        {
            printf("You have entered negative number");
        }
    }

    else
    {
        printf("You have entered positive number");
    }

    getch();

}
