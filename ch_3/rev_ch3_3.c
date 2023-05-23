#include<stdio.h>
#include<conio.h>
main()

{
	int area, base, height;
	clrscr();

	printf("EnterThe Value Of base : ");
	scanf("%d",&base);
	printf("EnterThe Value Of heigth : ");
	scanf("%d",&height);

	area = base*height;

	printf("the value of trangle : %d",area);
	getch();
}
