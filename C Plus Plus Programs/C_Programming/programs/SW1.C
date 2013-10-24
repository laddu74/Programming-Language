/*	This program demonstrates switch statement
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int n1, n2, op;
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	printf("\nMenu");
	printf("\n1: Addition");
	printf("\n2: Subtraction");
	printf("\n3: Multiplication");
	printf("\n4: Division");
	printf("\nPlease select the operation: ");
	scanf("%d", &op);
	switch (op)
	{
		case 1: printf("Sum is : %d", n1 + n2);
				break;
		case 2: printf("Difference is : %d", n1 - n2);
				break;
		case 3: printf("Product is : %d", n1 * n2);
				break;
		case 4: printf("Quotient is : %d", n1 / n2);
				printf("\nRemainder is : %d", n1 % n2);

	}
}