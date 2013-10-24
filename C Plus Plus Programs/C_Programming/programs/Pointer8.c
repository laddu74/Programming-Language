#include <stdio.h>

void main()
{
    char str[80];
    char token[10];
    char  *p , *q;

    printf("Enter a sentence: ");
    gets(str);

    p = str;

	while (*p)
	{
	  q = token;
	  while (*p != ' ' && *p)
	  {
		*q = *p;
		q++ ;
		p++;
	  }
	  if (*p)
	  p++;
	  *q = '\0';
	  printf("%s\n" , token);
    }
}
