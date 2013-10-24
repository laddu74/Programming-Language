/*	This program demonstrates formated scanf statement for floating-point input.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */
	char name[9],name1[9],name2[9], name3[9];

	/*Statements*/
	scanf("%4c %s %4s %s",name, name1, name2, name3);
	printf("\n%s %s %s %s",name, name1, name2, name3);
}

