/*	This program demonstrates printf statement.
	written by :
	Date :
*/
#include<stdio.h>
main()
{
	/* Local Definitions */

	char 		c = 'A';
	unsigned 	a = 30;
	int 		b = -50;
	float		d = 45.6520;
	double		e = 12.4e-120;
	char  str[20] = "This is a string";

	/*Statements*/
	printf("Character 	: %c\n",c);
	printf("Unsigned 	: %u\n",a);
	printf("int		 	: %d\n",b);
	printf("float	 	: %f\n",d);
	printf("double	 	: %e\n",e);
	printf("Hexadecimal	: %x\n",a);
	printf("Octal	 	: %o\n",a);
	printf("String	 	: %s\n",str);
	printf("%c %u %d %f %e %x %o",c, a, b, d, e, a, a);
}