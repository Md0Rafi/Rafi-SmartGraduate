//If-else program to find odd or even

#include<stdio.h>

void main()

{

    int a;

    printf("Enter an integer :");
    scanf("%d",&a);

    if(a % 2 == 0)
    {
        printf("The number is even");
    }

    else
    {
        printf("The number is odd");
    }

    getch();

}
