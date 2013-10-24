/*	This program identifies whether number is even or odd
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number : \n");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("Number is Even.");	/* single statement in the if body */
	else
		printf("Number is Odd.");  	/* single statement in the else body */
}

