#include<stdio.h>
#include<conio.h>
main()

{
	int a;
	int b;

	clrscr();

	a=10;
	b=20;

	a=a+b;
	b=a-b;
	a=a-b;

	printf("value of a is : %d",a);
	printf("\nvalue of b is : %d",b);


	getch();


}