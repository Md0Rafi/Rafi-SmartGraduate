//PROGRAM TO READ INPUTS UNTIL POSITIVE VALUE ENTERED

#include<stdio.h>

void main()

{

    int i,a,sum=0;

    do
    {
        printf("Enter a number :");
        scanf("%d", &a);
    }
    while(a<0);

    for(i=1;i<=a;i++)
    {
        sum += i;
    }

    printf("The sum is %d",sum);

    getch();

}
