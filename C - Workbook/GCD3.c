//PROGRAM TO FIND GCD OF TWO NUMBERS

#include<stdio.h>

void main()

{

    int a,b;

    printf("Enter two numbers :");
    scanf("%d %d",&a, &b);

    a = (a > 0)? a : -a;
    b = (b > 0)? b : -b;

    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    printf("The GCD of two numbers is %d",a);

    getch();
}
