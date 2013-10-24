/* 	Determines the MAX element in the array
*/

#include <stdio.h>
#define N 5
void main()
{	/* declare an array */
	int arr[N]; 				/* elements from arr[0] to arr[N-1]; */
	int i, max;

	/* array input */
	for (i = 0; i < N; i++)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

	/* finding max of array elements */
	max = arr[0];
	for (i = 1; i < N; i++)
		if (max < arr[i]) max = arr[i];

	printf("MAX array element is %d.\n", max);

}