//PROGRAM TO FIND GREATEST OF TWO NUMBERS USING IF-ELSE-IF

#include<stdio.h>

void main()

{

    int a,b;

    printf("Enter two integers :");
    scanf("%d%d",&a,&b);

    if(a == b)
    {
        printf("Both values are equal");
    }

    else if(a > b)
    {
        printf("%d is greater",a);
    }

    else
    {
        printf("%d is greater",b);
    }

    getch();

}
