//PROGRAM TO PRINT GIVEN NUMBERS FROM 0

#include<stdio.h>

void main()

{

    int n,i;

    printf("Enter the value of n :");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\n",i);
        i++; //i = i + 1;
    }

    getch();

}
