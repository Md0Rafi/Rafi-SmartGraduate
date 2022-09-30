//PROGRAM TO DISPLAY IF THE GIVEN NUMBER IS PALINDROME
//PALINDROME NUMBERS ARE NUMBERS WHICH REMAIN SAME EVEN WHEN REVERSED

#include<stdio.h>

void main()

{

    int n, og, reverse = 0, remainder;

    printf("Enter the number :");
    scanf("%d", &n);

    og = n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (reverse == og)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }

    getch();

}
