//PROGRAM TO DISPLAY THE COUNT OF THE GIVEN NUMBER

#include<stdio.h>

void main()

{

    int count = 0;
    long long n;

    printf("Enter the number :");
    scanf("%lld",&n);

    do
    {
        n /= 10;
        ++count;
    }
    while(n != 0);

    printf("Number of digits = %d",count);
    getch();
}
