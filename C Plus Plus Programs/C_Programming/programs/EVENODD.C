/*	This program identifies whether number is even or odd
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n;
	printf(Enter the number : \n);
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("\n Number is Even");
	}
	else
	{
		printf("\n Number is Odd");
	}

}