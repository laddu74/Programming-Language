/*	This program demonstrates formated scanf statement for floating-point input.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

char name[9],name1[9],name2[9];

	/*Statements*/
	printf("Enter the name\n");
	scanf("%4c",name);
	printf("Enter the name\n");
	scanf("%s",name1);
	printf("Enter the name\n");
	scanf("%4s",name2);
	printf("\n%s",name);
	printf("\n%s",name1);
	printf("\n%s",name2);
}
