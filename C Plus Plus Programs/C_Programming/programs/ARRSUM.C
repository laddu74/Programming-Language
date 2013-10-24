/* 	Program determines the sum of array elements
*/

#include <stdio.h>
#define N 5				 /* dimension of the array */

void main()
{
	/* declare an array */
	int arr[N]; /* elements from ar[0] to ar[N-1]; */
	int i, sum;
	
	/* array input */
	for (i = 0; i < N; ++i) {
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}

	/* summing array elements */
	sum = 0;
	for (i = 0; i < N; ++i) 
		sum += arr[i];

	printf("Sum of array elements = %d\n", sum);
}