/*	This program calutates the area of circle or rectangle
	written by :
	Date :
*/
#include<stdio.h>
#define PI 3.14159
main()
{
	float n1, n2;
	char ch;
	printf("Press C or R for the area of circle or rectangle, respectively :");
	scanf("%c", &ch);
	if (ch == 'C' || ch == 'c')
	{
	   printf("Enter radius : ");  /* Multiple statements in the if body */
	   scanf("%f", &n1);
	   printf("Area of circle is %f", PI * n1 * n1);
	}
		if (ch == 'R' || ch == 'r')
	{
	   printf("Enter length and width :"); /* Multiple statements in the if body */
	   scanf("%f %f", &n1 ,&n2);
	   printf("Area of rectangle is %f",  n1 * n2);
	}
}