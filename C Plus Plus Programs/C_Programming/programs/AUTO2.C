#include<stdio.h>
void main()
{
	auto int a=10;
	{
		auto int a=20;
		{
			auto int a=30;
			printf("\n%d",a);
		}
		printf("\t%d",a);
	}
	printf("\t%d",a);
}