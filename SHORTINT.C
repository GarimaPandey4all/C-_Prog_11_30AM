#include<stdio.h>
#include<conio.h>

//-32768 to -1 and 0 to 32767

void main()
{
	//signed short int x = -32772;

	unsigned short x = 65538;

	clrscr();

	printf("Value of x is:%d\n", x);

	printf("Value of x is:%u", x);

	getch();
}