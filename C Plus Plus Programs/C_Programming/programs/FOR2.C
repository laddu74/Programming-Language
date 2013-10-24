/*	This program displays the square of numbers
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n, sq;
	for (n=10; n>=5; n--)
	{
		sq = n * n;
		printf("\nSquare of %d is %d", n, sq);
	}
}