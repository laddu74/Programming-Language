/*	This program demonstrates else-if statement
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	int m;
	printf("Enter the marks : \n");
	scanf("%d", &m);
	if (m >= 75)
		printf("Grade : Distinction");
		else if (m >= 60)
			printf("Grade : First Class");
			else if (m >= 50)
				printf("Grade : Second Class");
				else if (m >= 40)
					printf("Grade : Pass Class");
					else
						printf("Grade : Fail");

}