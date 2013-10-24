
#include <stdio.h>

main()
{
	char ch = 'A';       		/* Initialization */

	while (ch <= 'Z')    		/* Test condition */
	{
		printf("%c\t" , ch);
		ch++;                	/* Updation by incrementing */
	}
}

