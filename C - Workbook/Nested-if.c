//PROGRAM TO FIND GREATEST OF TWO NUMBERS USING NESTED IF

#include<stdio.h>

void main()

{

    int a,b;

    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a >= b)
    {
        if(a == b)
        {
            printf("Both values are equal");
        }
        else
        {
            printf("%d is greater than %d",a,b);
        }
    }

    else
    {
        printf("%d is greater than %d",b,a);
    }

    getch();

}
