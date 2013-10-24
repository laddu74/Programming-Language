/* 
	Program demonstrates the use of addresses in function arguments
*/

#include <stdio.h>
void no_swap(int x, int y);
void swap(int *p1, int *p2);

main() {
	int a = 1, b = 999;

	printf("a = %d, b = %d\n", a, b);
	no_swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

/* bad example of swapping - a function can't change parameters */
void no_swap(int x, int y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}

/* good example of swapping - a function can't change prameters
   but if a parameter is a pointer it can change the value it points to */
void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
