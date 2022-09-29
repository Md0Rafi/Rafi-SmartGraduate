//PROGRAM TO DISPLAY MULTIPLICATION TABLE FOR GIVEN INPUTS

#include<stdio.h>

void main()

{

    int n,i,range;

    printf("Enter an integer :");
    scanf("%d", &n);

    do
    {
        printf("Enter a range :");
        scanf("%d", &range);
    }
    while(range <= 0);

    for(i=1;i<=range;i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }
    getch();
}
