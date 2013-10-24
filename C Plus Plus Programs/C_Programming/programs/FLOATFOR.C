/*	This program demonstrates formated printf statement for floating-point output.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

	float   	y = 3456.12065;


	/*Statements*/
	printf("With no modifier	 			:%f\n",y);
	printf("L=7, 2 digits after DP			:%7.2f\n",y);   /* L : length in characters */
	printf("L=9, 2 digits after D, R-J		:%9.2f\n",y);   /* R-J : Right justified */
	printf("L=9, 2 digits after D, L-J		:%-9.2f\n",y);  /* L-J : Left justified */
	printf("L=9, 3 digits after DP,exp		:%9.3e\n",y); 	/* exp : exponential display */
	printf("L=12,6 digits after DP,exp		:%12.6e\n",y);
	printf("L=12,4 digits after DP,exp		:%12.4e\n",y);
	printf("L=12,4 digits after DP,exp, L-J	:%-12.4e\n",y);
	printf("L=12,4 digits after DP,exp, L-J	:%-12.4e\n",-y);
}
