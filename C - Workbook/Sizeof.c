//USE OF SIZEOF KEYWORD
//SIZEOF - RETURNS THE SIZE OF THE DECLARED VALUE OR TYPE

#include<stdio.h>

void main()

{

    char charType;
    int intType;
    float floatType;
    double doubleType;

    printf("The size of char is %zu\n",sizeof(charType));
    printf("The size of int is %zu\n",sizeof(intType));
    printf("The size of float is %zu\n",sizeof(floatType));
    printf("The size of double is %zu\n",sizeof(doubleType));

    getch();

}
