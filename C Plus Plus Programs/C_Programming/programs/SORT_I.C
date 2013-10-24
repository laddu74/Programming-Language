/*	This program sorts array in the ascending order using insertion sort method.*/
#include<stdio.h>
void main()
{
	int i, j;
	int x[5] = {58,	42,		12,		38,		15};
	int  data;
	for (i = 1; i< 5; i++)

{
		data = x[i];
		for (j = i - 1; (j>=0) && (data <x[j]); j --)
			{
					x[j+1]  =  x [j];
			}
			x [j+1] = data;
		}
		printf("The sorted array is .............");
		for (i = 0;   i < 5;  i++)
		{
				printf ("\t%d", x[i]);
		}
}

