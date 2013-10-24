/*	This program demonstrates printf statement for string display.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

char	str[21]="THIS IS A TEST STRING";

	/*Statements*/
	printf("With no modifier	:%s\n",str);
	printf("		   			:%24s\n",str);
	printf(" 					:%24.14s\n",str);
	printf(" 					:%-24.14s\n",str);
	printf("					:%14s\n",str);
	printf("					:%.4s\n",str);
}
