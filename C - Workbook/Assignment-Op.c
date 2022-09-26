//ASSIGNMENT OPERATORS IN C

#include <stdio.h>

void main()

{

 int a,c;
 printf("Enter an integer :\n");
 scanf("%d",&a);

 c = a; // c is 5
 printf("c = %d\n", c);
 c += a; // c = c + a;
 printf("c = %d\n", c);
 c -= a; // c = c - a;
 printf("c = %d\n", c);
 c *= a; // c = c * a;
 printf("c = %d\n", c);
 c /= a; // c = c / a;
 printf("c = %d\n", c);
 c %= a; // c = c % a;
 printf("c = %d\n", c);

 getch();

}
