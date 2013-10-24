
#include <stdio.h>

main()
{
    int i , j;

	for (i=2 ; i<20 ; i++) {
       for (j=2 ; j<= i/2 ; j++) 
         if (!(i%j)) break;
       if (j>i/2) printf("%d is a prime\n" , i);
    }
}

