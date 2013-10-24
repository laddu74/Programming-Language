/* This program demonstrates recursion function */

#include<stdio.h>

int facto(int);
void main()
{
	int n, answer;
	printf("Enter the number: ");
	scanf("%d",&n);
	answer = facto(n);
	printf("Factorial of %d is %d.", n, answer);
}
facto(int n)
{
	int i, factorial=1;
	for(i=1; i<=n; i++)
	{
		factorial = factorial * i;
	}
	return(factorial);
}