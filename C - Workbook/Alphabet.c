//PROGRAM TO GET ONLY ALPHABET INPUT AND DISPLAY IT

#include<stdio.h>

void main()

{

    char c;

    printf("Enter an alphabet :");
    scanf("%c", &c);

    if(((c >= 'a')&&(c <= 'z')) || ((c >= 'A')&&(c <= 'Z')))
    {
        printf("You entered an alphabet");
        goto rafi;
    }

    else
    {
        printf("You have not entered an alphabet");
    }

    rafi:
        if((c >= 'a')&&(c <= 'z'))
            printf("\nYou have entered small %c",c);
        else if((c >= 'A')&&(c <= 'Z'))
            printf("\nYou have entered capital %c",c);
        else
            printf("\nYou have entered %c",c);
    getch();

}
