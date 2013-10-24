/* This program merges two sorted arrays */
#include <stdio.h>
void main ()
{
	int		 arr1[4]	=	{10,	16, 	28, 	42};
	int 	arr2[4]	=	{12,	24,	 36,	58};
	int 	arr3[8];
	int i = 0, j = 0, k = 0;
	clrscr();
	while (i<4  &&   j < 4)
	{
			if (arr1[i] < arr2[j])
			{
					arr3 [k] = arr1 [i];
					i++;
				}
			else
			{
					arr3 [k] = arr2 [j];
					j++;
				}
			k++;
	}

	for (; k<8; k++)
	{
			if (i ==4)
				{		
					arr3 [k] = arr2 [j];
				}
		else
				{
						arr3 [k] = arr1 [i];
					i++;
				}
	}			
		printf("The resulted array is : \n");
		for (k = 0; k<8; k++)
		{
			printf ("%d\t", arr3 [k]);
		}
		getch();
}

