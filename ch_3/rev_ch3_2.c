#include<stdio.h>
#include<conio.h>
main() {
	int area, width, length;
	clrscr();

	printf("EnterThe Value Of Width :- ");
	scanf("%d",&width);
	printf("EnterThe Value Of Length :- ");
	scanf("%d",&length);

	area = width*length;

	printf("The Value of Rectangle is : %d",area);
	getch();
}