/* This program demonstrates recursion function */

#include<stdio.h>

void reverse(void);         /* Function declaration */
void main()
{

	printf("Enter the character string");
	reverse();          	/*	Function call */
}
void reverse(void)       	/* Function definition		*/
{
	char c;
	c = getchar();
	if(c!='\n')
	{
		reverse();
	}
	putchar(c);
	return;
}