#include<stdio.h>
#include<conio.h>
main()
{
	float celsius;
	float fahrenheit;

       clrscr();

       printf("the value of c is : ");
       scanf("%f",celsius);

       fahrenheit=(celsius*9/5)+32;

       printf("the value of fahrenheit is : %f",fahrenheit);
       getch();
}