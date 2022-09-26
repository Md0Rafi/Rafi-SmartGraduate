//LOGICAL OPERATORS IN C

#include <stdio.h>

void main()

{

 int a = 5, b = 5, c = 10, result;
 printf("a = 5, b = 5, c = 10\n");
 printf("'0' refers false and '1' refers true\n\n");
 //LOGICAL AND if either is false then result is false
 result = (a == b) && (c > b);
 printf("(a == b) && (c > b) is %d \n", result);
 result = (a == b) && (c < b);
 printf("(a == b) && (c < b) is %d \n\n", result);

 //LOGICAL OR if either is true then result is true
 result = (a == b) || (c < b);
 printf("(a == b) || (c < b) is %d \n", result);
 result = (a != b) || (c < b);
 printf("(a != b) || (c < b) is %d \n\n", result);

 //LOGICAL OR if t then false or if false then true
 result = !(a != b);
 printf("!(a != b) is %d \n", result);
 result = !(a == b);
 printf("!(a == b) is %d \n\n", result);

 getch();

}
