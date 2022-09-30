//PROGRAM TO FIND WHETHER THE GIVEN NUMBER IS A PRIME OR NOT

#include<stdio.h>

void main()

{

    int n, i, flag = 0;

    printf("Enter the number :");
    scanf("%d", &n);

    if ( n==0 || n==1 )
    {
        flag = 1;
    }

    for(i=2;i<=n/2;++i)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The number is a prime number.");
    }
    else
    {
        printf("The number is not a prime number.");
    }

    getch();

}
