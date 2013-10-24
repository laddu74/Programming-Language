#include<stdio.h>
main()
{
int input_value;

	do
	{
		printf("Enter 1 for yes, 0 for no :");
		scanf("%d", &input_value);
	} 	while (input_value != 1 && input_value != 0);
}

