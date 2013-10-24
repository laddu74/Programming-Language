/* Program give the weight analysis of babies
*/

#include <stdio.h>
#define BABIES 5 /* dimension of the array */

void main(){
	float weight[BABIES]; /* elements from ar[0] to ar[BABIES-1]; */
	int i;
	float sum = 0, max = 0, average, diff;

	/* array input */
	for (i = 0; i < BABIES; ++i) {
		printf("Weight of baby %d: ", i);
		scanf("%f", &weight[i]);
		sum += weight[i];
		if(weight[i] > max) max = weight[i];
	}

	average = sum / BABIES;

	/* array output */
	printf("\nThe max weight is %.2f.\n", max);
	printf("The average weight is %.2f.\n\n", average);
	for (i = 0; i < BABIES; ++i) {
		diff = weight[i] - average;
		printf("Baby %d: weight %.2f ", i, weight[i]);
		if(diff > 0)
			printf("(%.2f heavier than the average)\n", diff);
		else if (diff < 0)
				printf("(%.2f lighter than the average)\n", -diff);
			 else
				printf("(Average weight)\n", -diff);
	}
}
