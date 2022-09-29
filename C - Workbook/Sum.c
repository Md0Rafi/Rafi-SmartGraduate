//PROGRAM TO FIND SUM OF GIVEN N NUMBERS

#include<stdio.h>

void main()

{

    int n,i,sum = 0;

    printf("Enter n value :");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        sum += i;
    }

    printf("The sum of n numbers is %d",sum);

    getch();

}
