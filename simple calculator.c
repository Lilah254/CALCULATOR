/*
A simple calculator
created by Lilian Njeri
on Feb, 2022
MIT License
C89 compiler

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
// variable declaration
char name[100];
int n1,n2,sum,diff,product;
float quot;
printf("simple calculator!\n");
// capture input
printf("Enter your name: ");
gets(name);
printf("Enter two integers: ");
scanf("%d%d",&n1,&n2);
// Copulations
sum = n1 + n2;
diff = n1 - n2;
product = n1 * n2;
quot = (float)n1/n2;

// outputs
printf("Hey %s, here is your results:\n",name);
printf("%6d + %6d = %6d\n",n1,n2,sum);
printf("%6d - %6d = %6d\n",n1,n2,diff);
printf("%6d * %6d = %6d\n",n1,n2,product);
printf("%6d / %6d = %6.2f\n",n1,n2,quot);

    return 0;
}
