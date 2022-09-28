//PROGRAM TO FIND GREATEST AMONG THREE NUMBERS

/*THIS PROGRAM HAS ONE BUG, IF USER ENTERS SAME VALUE
THEN VALUES ARE PRINTED MULTIPLE TIMES*/

#include<stdio.h>

void main()

{

    int n1, n2, n3;

    printf("Enter three numbers :");
    scanf("%d%d%d", &n1, &n2, &n3);

    if ((n1 >= n2)&&(n1 >= n3))
    {
        printf("%d is greatest");
    }

    if ((n2 >= n1)&&(n2 >= n3))
    {
        printf("%d is greatest");
    }

    if ((n3 >= n1)&&(n3 >= n2))
    {
        printf("%d is greatest");
    }

    getch();

}
