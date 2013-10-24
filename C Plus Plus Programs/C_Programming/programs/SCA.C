/*	This program demonstrates scanf statement.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

char	name[9], name1[9], name3[3];

	/*Statements*/
	scanf("%s",name);
	printf("%s",name);
	flushall();
	scanf("%4c",name1);
		printf("%s",name1);
	flushall();
	scanf("%s",name3);
		printf("%s",name3);
	getch();
}
