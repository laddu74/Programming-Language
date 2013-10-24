/*
*/

#include <stdio.h>
#define N 5 /* dimension of the array */
void readarray(int arr[], int n);
int sumarray(int arr[], int n);
int maxelement(int arr[], int n);
int sum, index;
void main() {

	/* declare an array */
	int testarray[N]; /* elements from ar[0] to ar[N-1]; */
	readarray(testarray, N);
	sum = sumarray(testarray, N);
	index = maxelement(testarray, N);
	printf("Sum = %d, Max_array_element[%d] = %d\n", sum, index, testarray[index]);
}

/* array input */
void readarray(int arr[], int n_of_elements) {
	int i;
	for (i = 0; i < n_of_elements; ++i) {
		printf("Element %d: ", i);
		scanf("%d", &arr[i]);
	}
}

/* summing array elements */
int sumarray(int ar[], int n_of_elements) {
	int i, sum = 0;
	for (i = 0; i < n_of_elements; ++i)
		sum += ar[i];
	return sum;
}

/* finding index of max array element */
int maxelement(int ar[], int n) {
	int i, maxind = 0;
	for (i = 1; i < n; ++i)
		if (ar[maxind] < ar[i]) maxind = i;
	return maxind;
}

