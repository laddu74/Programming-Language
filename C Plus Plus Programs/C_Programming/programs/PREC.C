/*	This program demonstrates operator precedence.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */
	int a = 30, b = 20, c= 10;

	/*Statements*/
	printf("a * b + c   is : %d\n",a * b + c);
	printf("a * (b + c) is : %d\n",a * (b + c));

	printf("a + b * c   is : %d\n",a + b * c);
	printf("a - b / c   is : %d\n",a - b / c);

	printf("--a + b * c   is : %d\n",--a + b * c);
	printf("a - b++ /(c-3)   is : %d\n",a - b++ / (c-3));

}