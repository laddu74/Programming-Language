/*	This program demonstrates casting of numeric types.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
/* Local Definitions */
int a = 8, sum;
char c = '4';

/*Statements*/

printf("Character C is %c\n",c);
printf("Numeric C is %d\n", (int) c);

sum = a + (int) c;

printf("sum is %d\n",sum);

}