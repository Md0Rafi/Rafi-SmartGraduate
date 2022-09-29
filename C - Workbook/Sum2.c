//PROGRAM TO FIND SUM OF N NUMBERS USING WHILE LOOP

#include<stdio.h>

void main()

{

    int i=1,n,sum=0;

    printf("Enter n value :");
    scanf("%d", &n);

    while(i<=n)
    {
        sum += i;
        i++;
    }

    printf("The sum of n value is %d",sum);

    getch();

}
