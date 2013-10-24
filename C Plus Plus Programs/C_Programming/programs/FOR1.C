/*	This demonstates the for loop. It gives the sum of first 30 natural numbers
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n, sum=0;
	for (n=1; n<=30; n++)
		sum = sum + n;
	printf("\nSum = %d", sum);
}