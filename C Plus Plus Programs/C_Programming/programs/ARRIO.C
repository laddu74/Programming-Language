/* The program demonstates array input-output
*/

#include <stdio.h>
#define DIM 5 /* dimension of the array */

void main()
{   /* declare an array */
	int arr[DIM]; 			/* elements from arr[0] to arr[DIM-1]; */
	int i;

	/* array input */
	i = 0;
	while(i < DIM)
	{
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
		++i;
	}
	/* array output */
	printf("Array elements:\n");
	i = 0;
	while(i < DIM)
	{
		printf("%d ", arr[i]);
		++i;
	}
	printf("\n");
}