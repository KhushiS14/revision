#include<stdio.h>
#include<conio.h>
main()
{
int a;
int b;
int sum;
int sub;
int mul;
int div;
int mod;

clrscr();

a =12;
b =6;

sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;

printf("\nthe sum of a and b is : %d",sum);
scanf ("%d",&sum);

printf("\nthe sub of a and b is : %d",sub);
scanf("%d",sub);

printf("\nthe mul of a and b is : %d",mul);
scanf("%d",mul);

printf("\nthe div of a and b is : %d",div);
scanf("%d",div);

printf("\nthe mod of a nad b is : %d",mod);
scanf("%d",mod);

getch();

}
