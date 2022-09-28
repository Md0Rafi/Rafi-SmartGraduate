//PROGRAM FOR DO WHILE LOOP

#include <stdio.h>

void main()

{

    double number, sum = 0;

    // The body of the do while loop is executed at least once
    do
    {
        printf("Enter a number(To display sum press '0'): ");
        scanf("%lf", &number);
        sum += number; //sum = sum + number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);
    getch();

}
