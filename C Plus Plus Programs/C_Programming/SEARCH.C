/*Q.2 (b) Write a program to count the number of words, lines and characters in a text.[June-2005, Set-4, Unit-3, Q.No.-11]
Ans. :
Program finding number of words, blank spaces, special symbols, digits, vowels using pointers.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#define low 1 	/*low implies that position of pointer is within a word*/
#define high 0 /*high implies that position of pointer is out of word.*/
void main()
{
	int nob,now,nod,nov,nos,pos=high;
	char *s;
	nob=now=nod=nov=nos=0;
	clrscr();
	printf("Enter any string:");
	gets(s);
	while(*s!='\0')
	{
		if(*s==' ')  /* counting number of blank spaces. */
		{
		pos=high;
		++nob;
		}
		else if(pos==high) /* counting number of words. */
		{
		pos=low;
		++now;
		}
		if(isdigit(*s))	   /* counting number of digits. */
		++nod;
		if(isalpha(*s))    /* counting number of vowels */
			switch(*s)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				++nov;
				break;
			}

	  if(!isdigit(*s)&&!isalpha(*s))
		++nos;        	/* counting number of special characters */
		s++;
	}
printf("\nNumber of words %d",now);
printf("\nNumber of spaces %d",nob);
printf("\nNumber of vowels %d",nov);
printf("\nNumber of digits %d",nod);
printf("\nNumber of special characters %d",nos);
getch();
}