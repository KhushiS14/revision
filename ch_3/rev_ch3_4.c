#include<stdio.h>
#include<conio.h>
main()
{
	int rate,time,principal,area;

	clrscr();

	printf("enter the rate of simpal intrest :");
	scanf("%d",&rate);

	printf("enter the time of simpal intrest :");
	scanf("%d",&time);

	printf("enter the principal of simpal intrest :");
	scanf("%d",&principal);

	area=rate*time*principal;

	printf("the area of simpal intrest is : %d",area);
	getch();


}