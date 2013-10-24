#include<stdio.h>

void incr(void)
{
	auto int a=1;
	printf("%d\t",a);
	a=a+1;
}

void main()
{
	incr();
	incr();
	incr();
}