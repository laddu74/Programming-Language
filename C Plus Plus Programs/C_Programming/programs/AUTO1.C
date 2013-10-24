#include<stdio.h>
void main()
{
	auto int a=10;
	{
		{
			{	printf("\n%d",a);
			}
		printf("\t%d",a);
		}
	}
	printf("\t%d",a);
}