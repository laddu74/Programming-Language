/* 	This program searches a target element and if found displays its location in 		the array; otherwise it displays message that target element is not within the 		array */

#include <stdio.h>
void main()
{
	int i, target, flag = 100;
	int x[5] = 	{	10,	20,	50,	40,	60};
	printf ("Enter any integer number as a target  :      ");
	scanf ("%d", &target);
	for (i = 0; i < 5; i ++)
	{
			if (target ==x[i])
			{
					printf("Location of target is %d",i);
					flag = i;
			}
	}		if (flag == 100)
		printf("Target element is not in the array.   ") ;

}

