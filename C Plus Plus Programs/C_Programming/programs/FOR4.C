/*	This program uses nested for loop and if else construction.
*/

#include <stdio.h>


main()
{
  int answer, count, chances, right;
  for (count=1; count<5; count++)
	{
		printf("What is %d + %d?", count, count);
		scanf("%d", &answer);
		if (answer == count+count)
			{
				printf("Right!\n");
			}
		else
			{
				printf("Sorry, you're wrong \n");
				printf("Try again\n");
				right = 0;
				for (chances=0; chances<3 && ! right; chances++)
				{
					printf("\nWhat is %d + %d?",count, count);
					scanf("%d", &answer);
					if (answer == count+count)
					{
						printf("Right!\n");
						right=1;
					}
				}
					if (!right) 	/* if answer still wrong, tell user */
					{
						printf("the answer is %d.\n", count+count);
					}
			} /* end of else part */
	}   /* end of outter for loop */
}
