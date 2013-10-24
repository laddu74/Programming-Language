/* This program illustrates the use of break statement for the termination of loop written by : 
Date :
*/
#include <stdio.h>
void main()
{
	int i;
	for (i = 0; i < 100; i++)
	{
		printf("%d\t",i);
		if (i==10)
			break;
	}
}

