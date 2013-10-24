#include <stdio.h>

int array[] = {1,20,32,12,45,100,56,78};
int *ptr;

int main(void)
{
	int i;
	ptr = &array[0];     /* point our pointer to the first
									  element of the array */
	printf("\n\n");
	for (i = 0; i < 8; i++)
	{
	  printf("array[%d] = %d   ",i,array[i]);   /* A */
	  printf("ptr + %d = %d\n",i, *(++ptr));        /* B */
    }
    return 0;
}

