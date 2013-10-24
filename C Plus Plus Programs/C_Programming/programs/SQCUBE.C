#include <stdio.h>
double sqcube(int x, int *pcube);
main()
{
	int x, square, cube;
	x = 3;
	square = sqcube (x, &cube);
	printf("x = %d, square = %d, cube = %d\n", x,  square, cube);
}
/*Function return square of x, and indirectly stores cube of x*/
double sqcube (int x, int *pcube)
{
	*pcube = x*  x*  x;
	return (x * x);
}

