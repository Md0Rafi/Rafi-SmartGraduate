//PROGRAM TO ADD UPTO GIVEN N NUMBERS USING FOR LOOP

#include<stdio.h>

void main()

{

    int n,i,sum=0;

    printf("Enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    printf("The sum of %d numbers is %d",n,sum);

    getch();

}
