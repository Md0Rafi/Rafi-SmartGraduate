//PROGRAM USING continue

#include<stdio.h>

void main()

{

    int i;
    double number, sum = 0.0;

    for (i = 1; i <= 10; ++i)
    {
        printf("Enter a n%d: ", i);
        scanf("%lf", &number);

        if (number < 0.0) //If user enters negative value, continue
        {
            continue;
        }

        sum += number; // sum = sum + number;
    }
    printf("Sum = %.2lf", sum);

    getch();

}
