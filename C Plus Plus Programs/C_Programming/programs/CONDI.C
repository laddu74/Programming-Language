/*	This program demonstrates conditional operator.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */
	int a = 8, b = 10, op1, op2;

	/*Statements*/
	op1 = a < b ? a : b;
	printf("The option 1 = %d\n",op1);
	op2 = a > b ? a : b;
	printf("The option 2 = %d\n",op2);

}