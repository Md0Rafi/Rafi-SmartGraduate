//PROGRAM TO FIND LCM OF TWO GIVEN NUMBERS

#include<stdio.h>

void main()

{

    int a,b,max;

    printf("Enter two numbers :");
    scanf("%d %d",&a, &b);

    max = (a > b)? a : b;

    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("The LCM of %d and %d is %d",a,b,max);
            break;
        }
        ++max;
    }

    getch();
}
