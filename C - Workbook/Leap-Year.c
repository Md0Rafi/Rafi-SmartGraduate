//PROGRAM TO FIND LEAP YEAR

#include<stdio.h>

void main()

{

    int year;

    printf("Enter the year :");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The year %d is leap year",year);
    }

    else
    {
        printf("The year %d is not a leap year",year);
    }

    getch();

}
