//PROGRAM TO FIND THE PRIME NUMBERS BETWEEN THE GIVEN RANGE

#include <stdio.h>

int main()

{

    int low, high, i, flag;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

     // iteration will continue until low is not equal to high

    while (low < high)
    {
        flag = 0;
        if (low <= 1) // ignore numbers less than 2
        {
            ++low;
            continue;
        }
        for (i = 2; i <= low / 2; ++i) // if low is a non-prime number, flag will be 1
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", low);
            ++low;  // to check prime for the next number increase low by 1
     }

     return 0;

}
