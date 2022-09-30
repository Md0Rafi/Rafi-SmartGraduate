//PROGRAM TO DISPLAY THE REVERSE OF GIVEN NUMBER

#include<stdio.h>

void main()

{

    int n,remainder,reverse = 0;

    printf("Enter a number :");
    scanf("%d", &n);

    printf("The reversed number of %d",n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
        n /= 10;
    }

    printf(" is %d",reverse);

    getch();

}
