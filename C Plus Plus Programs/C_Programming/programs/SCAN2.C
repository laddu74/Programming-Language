/*	This program demonstrates use of scanf function.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int    a, b, c;
	printf("Enter decimal, octal, and hexadecimal numbers\n");
	scanf("%d %o %x", &a, &b, &c);
	printf("\n %d %d %d", a, b, c);
}

