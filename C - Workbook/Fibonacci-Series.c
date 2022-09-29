//PROGRAM TO DISPLAY THE FIBONACCI SERIES FOR THE GIVEN DATA

#include<stdio.h>

void main()

{

    int t1 = 0, t2 = 1,n,i;
    int nextTerm = t1 + t2;

    printf("Enter the no. of terms :");
    scanf("%d", &n);

    printf("The Fibonacci Series for the given no. of terms are : %d, %d, ",t1,t2);

    for(i=3;i<=n;i++)
    {
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    getch();

}
