#include<stdio.h>
void print_square(int);

void main()
{
 int i;
 int num[5] = { 1, 2, 3, 4, 5 };
 for(i=0;i<5;i++)
	{
	 print_square(num[i]);
	}
}
void print_square(int x)
{
	printf("%d\t", x * x);
}