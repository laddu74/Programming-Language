#include <stdio.h>
#include <string.h>
void main()
{
	char s[80];
	int i;
	printf("Enter the string : ");
	gets(s);
	i = strlen(s);
	printf("The length of the string is %d.", i);
}


