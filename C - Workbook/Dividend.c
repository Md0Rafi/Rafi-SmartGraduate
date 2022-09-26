//TO FIND QUOTIENT AND REMAINDER

#include<stdio.h>

void main()

{

    int dividend,divisor,remainder,quotient;

    printf("Enter the divisor :");
    scanf("%d",&divisor);
    printf("Enter the dividend :");
    scanf("%d",&dividend);

    remainder = dividend % divisor;
    quotient = dividend / divisor;

    printf("The quotient is %d and the remainder is %d",quotient,remainder);

    getch();

}
