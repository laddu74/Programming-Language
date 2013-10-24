/*	This program demonstrates printf statement with prefix letters.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

	short unsigned	b = 150;
	long			c = 1234567890;
	double			y = 1234e+300;
	long double   	z = 1234e+4000;

	/*Statements*/
	printf("Short unsigned integer 	:%hu\n",b);
	printf("Long integer		   	:%ld\n",c);
	printf("Double floating point 	:%lf\n",y);
	printf("Long Double		:%Lf\n",z);
}
