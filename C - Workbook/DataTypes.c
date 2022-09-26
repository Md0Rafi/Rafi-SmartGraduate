#include <stdio.h>

void main()

{

 char chr;
 printf("Enter a character: ");
 scanf("%c",&chr);
 printf("You entered %c.\n", chr);

 int testInteger;
 printf("Enter an integer: ");
 scanf("%d", &testInteger);
 printf("Number = %d\n",testInteger);

 float num1;
 printf("Enter a float number: ");
 scanf("%f", &num1);
 printf("The number = %f\n", num1);

 double num2;
 printf("Enter a double number: ");
 scanf("%lf",&num2);
 printf("The number is %lf",num2);

 getch();

}
