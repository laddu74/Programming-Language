/* The program demonstrates passing of entire array using passing by reference
*/
#include<stdio.h>

void mul2 (int []);		/* Function declaration	*/
void main()
{
	int i;
	int arr[5] = {3, 6, 24, 18, 53};

	mul2(arr);
	for(i=0; i<5; i++)
	{
	printf("\nElement %d: %d", i, arr[i]);
	}
}

void mul2(int x[])
{
	int i;

	for(i=0; i<5; i++)
	{
		x[i] = x[i] * 2;
	}
}





