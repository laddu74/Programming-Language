/* The program demonstrates array input and output with for loop
*/

#include <stdio.h>
#define DIM 5 /* dimension of the arrray */

void main(){

	int arr[DIM]; /* elements from arr[0] to arr[DIM-1]; */
	int i;

	/* arrray input */
	for (i = 0; i < DIM; ++i) {
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}
	/* arrray output */
	printf("Array Elements: ");
	for (i = 0; i < DIM; ++i)
		printf("%d\t", arr[i]);
	printf("\n");

	/* output in reverse order */
	printf("Array elements in reverse order: ");
	for (i = DIM-1; i >= 0; --i)
		printf("%d\t", arr[i]);
	printf("\n");
}