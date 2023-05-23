#include<stdio.h>
#include<conio.h>
main()
{
	int perimeter;
	int radius;
	const pie=3.14;

	clrscr();

	printf("enter the value of redius : ");
	scanf("%d",&radius);

	perimeter=radius*2*pie;

	printf("the value of redius of circle  is : %d",perimeter);

	getch();
}