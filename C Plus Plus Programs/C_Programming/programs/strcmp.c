#include <stdio.h>
#include <string.h>

void main()

{
 char s[80];
 int i;
 printf("Enter password : ");
 gets(s);
 i = strcmp(s,"atul");
 if (i==0)
	printf("\nCorrect password.");
 else
	printf("\nIncorrect password.");
}