//PROGRAM USING SWITCH CASE

#include<stdio.h>

void main()

{

    int ch;
    double a,b;

    printf("Enter two integers :");
    scanf("%lf%lf", &a, &b);
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n \nEnter your choice of operation :");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
            printf("The sum of %.1lf and %.1lf is %.1lf",a,b,a+b);
            break;
        }
    case 2:
        {
            printf("The subtraction of %.1lf and %.1lf is %.1lf",a,b,a-b);
            break;
        }
    case 3:
        {
            printf("The multiplication of %.1lf and %.1lf is %.1lf",a,b,a*b);
        }
    case 4:
        {
            printf("The division of %.1lf and %.1lf is %.1lf",a,b,a/b);
            break;
        }
    default:
        {
            printf("INVALID OPTION");
        }
    }
    getch();
}
