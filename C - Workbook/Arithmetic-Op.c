//Arithmetic Operators in C
#include <stdio.h>

void main()

{

 int a,b,c;
 printf("Enter two integers :");
 scanf("%d%d",&a,&b);

 c = a+b;
 printf("a+b = %d \n",c);
 c = a-b;
 printf("a-b = %d \n",c);
 c = a*b;
 printf("a*b = %d \n",c);
 c = a/b;
 printf("a/b = %d \n",c);
 c = a%b;
 printf("Remainder when %d divided by %d = %d \n",a,b,c);

 getch();
}
