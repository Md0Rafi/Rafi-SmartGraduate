//PROGRAM TO DISPLAY FIBONACCI SERIES UPTO GIVEN NUMBER

#include<stdio.h>

void main()

{

    int i,n,t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    printf("Enter the no.: ");
    scanf("%d", &n);

    printf("The Fibonacci Series upto %d are : %d, %d, ",n,t1,t2);

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    getch();
}
