/*Q.1 (a) Write a program to read the values of x, y and z and print the results of the following expressions in one line. [Nov./Dec.-2005, Set-1, Unit-1, Q.No.-21]
Ans. :*/
	#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int x,y,z;
	float a,b,c;
	clrscr();
	printf("Enter the values of x,y and z : ");
	scanf("%d%d%d",&x,&y,&z);
	a=(x+y+z)/(x-y-z);
	b=(x+y+z)/3;
	c=(x+y)*(x-y)*(y-z);
	printf("a = %f\tb = %f\tc = %f",a,b,c);
	getch();
	}