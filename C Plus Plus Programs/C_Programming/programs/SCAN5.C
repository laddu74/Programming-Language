/*	This program demonstrates formated scanf statement for string input.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */
	char name[30];

	/*Statements*/
	scanf("%[^\n]", name);  /* Accepts string till newline character */
	printf("\n%s",name);

	scanf("%[^t]", name);   /* Accepts string till t */
	printf("\n%s",name);
}

