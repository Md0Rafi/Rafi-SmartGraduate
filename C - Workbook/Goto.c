//PROGRAM USING GOTO STATEMENT

#include<stdio.h>

void main()

{

    int i;
    double avg,num,sum=0.0;

    for(i=1;i<=100;++i)
    {
        printf("Enter a number :");
        scanf("%lf",&num);
        sum += num;

        if(num<0.0)
        {
            goto jump;
        }
    }

    jump:
        avg = sum / (i-1);
        printf("Sum = %.2lf",sum);
        printf("Average = %.2lf",avg);

    getch();

}
