/*	This program sorts the array in the ascending order using bubble sort method.
#include<stdio.h> */
void main()
{
	int i, j, temp;
	int x[8] = {25,	57,		48,		37,		12,		92,		86,		33};
	for (i=0; i<8; i++)
	{
		for (j=0; j<8; j++)
			{
				if (x[j]  >  x[j+1])
					/* exchange elements */
				 {	temp = x[j];
					x[j] = x[j+1];
					x[j+1] = temp;
				 }
			}
	}
printf (" The sorted array is..............");
	for (i=0;  i<8; i++)
	{
		printf ("\t%d", x[i]);
	}
}


