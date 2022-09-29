//PROGRAM TO FIND THE GIVEN NUMBER IS POSITIVE OR NEGATIVE

#include<stdio.h>

void main()

{

    double n;

    printf("Enter a number :");
    scanf("%lf", &n);

    if(n > 0)
        printf("The number entered is positive");
    else if
        (n < 0)
        printf("The number entered is negative");
    else
        printf("The number entered is 0");

    getch();

}
