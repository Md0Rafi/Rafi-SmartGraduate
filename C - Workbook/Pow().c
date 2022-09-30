//PROGRAM TO FIND POWER OF GIVEN INPUTS USING POW() FUNCTION

#include<stdio.h>

void main()

{

    double base, exp, result;

    printf("Enter the integer :");
    scanf("%lf", &base);
    printf("Enter the exponent :");
    scanf("%lf", &exp);

    result = pow(base, exp);

    printf("The value of %.1lf ^ %.1lf is %.2lf",base,exp,result);

    getch();

}
