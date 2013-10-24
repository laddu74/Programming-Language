/*	This program demonstrates use of \t and \n characters.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Definitions */
	float a = 8250, b= 10125, c = 125000;

	/* Statements */
	printf("Basic salary:\t%9.2f \t%9.2f \t%9.2f\n", a, b, c);
	printf("Allowance   :\t%9.2f \t%9.2f \t%9.2f\n", a/10.0, b/10.0, c/10.0);
	printf("Total salary:\t%9.2f \t%9.2f \t%9.2f\n", a*1.1, b*1.1, c*1.1);
}