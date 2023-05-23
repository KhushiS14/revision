#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
int b=20;
int c;

clrscr();

c=a;
a=b;
b=c;

printf("the value of a is : %d",a);
printf("the value of b is : %d",b);

getch();
}
