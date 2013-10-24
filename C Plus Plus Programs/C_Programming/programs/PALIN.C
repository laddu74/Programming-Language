/*  Program checks whether string is palindrome or not.
*/

#include <stdio.h>

int palindrome(char s[]);
int strlen (char s[]);

void main()
{
	char p[20];
	gets(p);
	if(palindrome(p))
		printf("%s is a palindrome\n", p);
	else
		printf("%s is not a palindrome\n", p);
}


/* returns 1 if s is a palindrome, 0 otherwise */

int palindrome(char s[]) {
	int bottom, top;

	bottom = 0;
	top = strlen(s) - 1;
	while(bottom < top && s[bottom] == s[top]) {
		++bottom;
		--top;
	}
	if(bottom >= top)
		return 1;
	else
		return 0;
}


/* return length of the sting s */

int strlen (char s[]) {
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return i;
}
