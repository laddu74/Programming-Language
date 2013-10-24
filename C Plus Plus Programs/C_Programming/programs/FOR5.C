/* This program demonstrate the use of nested for loop to display Tables
*/
#include <stdio.h>

main()
{
	int i , j;

	for (i=1 ; i<=10 ; i++)
	{
	   for (j=2 ; j<= 10; j++)
	   {
			printf("\t%d", j*i);
	   }
	   printf("\n");
	}
}

