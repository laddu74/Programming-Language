/*	This demonstrates the array
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int i;
	float marks[5]; 	/* array delcaration */
	float sum=0, avg;
	for (i=0; i<=4; i++)
	{
		printf("Enter marks[%d] = ",i);
		scanf("%f",&marks[i]);   	/* Entering array elements */
	}
	for (i=0; i<=4; i++)
	{
		sum = sum + marks[i];		/* Reading data from array */
	}
	avg = sum / 5;
	printf("Average Marks = %6.2f", avg);
}