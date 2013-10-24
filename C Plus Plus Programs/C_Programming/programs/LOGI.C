/*	This program demonstrates the results of Logical Operators.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
/* Local Definitions */
int a = 8;
int b = -5;
int c = 0;

/*Statements*/

printf("%d && %d is %d\n", a ,b, a && b);
printf("%d && %d is %d\n", a ,c, a && c);
printf("%d && %d is %d\n", c ,a, c && a);
printf("%d || %d is %d\n", a ,c, a || c);
printf("%d || %d is %d\n", c ,a, c || a);
printf("%d || %d is %d\n", c ,c, c || c);
printf("!%d && !%d is %d\n", a ,c, !a && !c);
printf("!%d && %d is %d\n", a ,c, !a && c);
printf("%d && !%d is %d\n", a ,c, a && !c);
}