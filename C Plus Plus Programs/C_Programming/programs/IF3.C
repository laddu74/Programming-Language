/*	This program demonstrates nested-if
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n1, n2;
	printf("Enter two numbers : \n");
	scanf("%d %d", &n1, &n2);
	if (n1 >= n2)
		if (n1 > n2)
			printf("%d is greater than %d.", n1, n2);
		else
			printf("%d is equal to %d.", n1, n2);
	else
		printf("%d is less than %d.", n1, n2);

}