#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(void)
{
	char *s ;
	int i;
	s = malloc (80);												/*Request for memory allocation */

	if(!s)
	{
		printf("Memory allocation failed. \n");
		exit(1);																				/* if request is failed exit*/
	}
	printf ("Enter the string:  ");
	gets (s);																			/* Read the string from keyboard*/
	for (i = strlen (s) - 1; i>= 0;  i --)
	{
			putchar (s[i]);													/*Print single character*/
	}
	free (s);																		/* Return the previously allocated memory*/
}

