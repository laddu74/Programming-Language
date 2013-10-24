/*	This program demonstrates formated printf statement.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

	int   a = 12345;
	long  b = 567890;

	/*Statements*/
	printf("With no modifier		    :%d\n",a);
	printf("MFW=8 with right justified	:%8d\n",a); /* MFW : Minimum Field Width */
	printf("MFW=8 with left justified	:%-8d\n",a);
	printf("MFW=8 with left justified	:%-8d\n",-a);
	printf("Minimum Field Width 3		:%3d\n",a);
	printf("Padding With Zeros			:%08d\n",a);
	printf("Long integer				:%ld\n",b);




}