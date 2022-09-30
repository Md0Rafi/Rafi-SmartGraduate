//PROGRAM TO FIND ARMSTRONG NUMBER

#include <math.h>
#include <stdio.h>

int main()

{

     int num, originalNum, remainder, n = 0;
     float result = 0.0;

     printf("Enter an integer: ");
     scanf("%d", &num);

     originalNum = num;

     // Store the number of digits of num in n
     for (originalNum = num; originalNum != 0; ++n)
     {
        originalNum /= 10;
     }

     for (originalNum = num; originalNum != 0; originalNum /= 10)
     {
        remainder = originalNum % 10;

        result += pow(remainder, n); // Store the sum of the power of individual digits in result
     }

     if ((int)result == num) // If num is equal to result, the number is an Armstrong number
        printf("%d is an Armstrong number.", num);
     else
        printf("%d is not an Armstrong number.", num);

     return 0;

}
