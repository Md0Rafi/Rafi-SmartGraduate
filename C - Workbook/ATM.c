//PROGRAM TO ILLUSTRATE THE WORKING OF ATM WITHDRAWAL

#include<stdio.h>
#include<conio.h>

int totalThousand = 1000;
int totalFiveHundred = 1000;
int totalOneHundred = 1000;

void main()

{

    unsigned long withdrawAmt;
    unsigned long totalAmt;
    int Thousand = 0,FiveHundred = 0,OneHundred = 0;

    printf("Enter the amount to withdraw (x100):");
    scanf("%lu", &withdrawAmt);

    if(withdrawAmt % 100 != 0)
    {
        printf("Please enter in multiple of hundreds");
        getch();
        return;
    }
    totalAmt = totalThousand * 1000 + totalFiveHundred * 500 + totalOneHundred * 100;

    if(withdrawAmt > totalAmt)
    {
        printf("Insufficient Balance");
        getch();
        return;
    }
    Thousand = withdrawAmt / 1000;
    if(Thousand > totalThousand)
    {
        Thousand = totalThousand;
        withdrawAmt = withdrawAmt - Thousand * 1000;
    }
    if(withdrawAmt > 0)
    {
        FiveHundred = withdrawAmt / 500;
        if(FiveHundred > totalFiveHundred)
        {
            FiveHundred = totalFiveHundred;
            withdrawAmt = withdrawAmt - FiveHundred * 500;
        }
    }
    if (withdrawAmt > 0)
        OneHundred = withdrawAmt / 100;
        printf("Total 1000 note: %d\n",Thousand);
        printf("Total 500 note: %d\n",FiveHundred);
        printf("Total 100 note: %d\n",OneHundred);

    getch();
}
