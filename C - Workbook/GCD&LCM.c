//PROGRAM TO FIND GCD AND LCM

#include<stdio.h>

void main()

{

    int a,b,gcd,lcm,i;

    printf("Enter two integers :");
    scanf("%d %d", &a, &b);

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    lcm = (a * b)/gcd;
    printf("The GCD is %d ",gcd);
    printf("The LCM is %d",lcm);

    getch();

}
