//PROGRAM TO FIND THE POWER OF GIVEN INPUTS USING WHILE LOOP

#include<stdio.h>

void main()

{

    int base, exp;
    int result = 1;

    printf("Enter the integer :");
    scanf("%d", &base);
    printf("Enter the exponent :");
    scanf("%d", &exp);

    printf("The value of %d^%d ",base,exp);

    while(exp != 0)
    {
        result *= base;
        --exp;
    }

    printf("is %d",result);

    getch();
}
