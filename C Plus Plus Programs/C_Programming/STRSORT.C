/*Q.2 (a) Write a program to sort the set of strings in an alphabetical order? [Nov./Dec.-2005, Set-2, Unit-2, Q.No.-9]
Ans. :
   Program to sort set of strings in alphabetical order*/
#include<stdio.h>
#include<string.h>
void main()
{
char s[5][20],t[20];
int i,j;
clrscr();
printf("Enter any five strings");
for(i=0;i<5;i++)
	scanf("%s",s[i]);
for(i=1;i<5;i++)
	{
	for(j=1;j<5;j++)
		{
		if(strcmp (s[j-1],s[j])>0)
			{
			strcpy(t,s[j-1]);
			strcpy(s[j-1],s[j]);
			strcpy(s[j],t);
			}
		}
	}
printf("strings in order are :");
for(i=0;i<5;i++)
	printf("\n%s",s[i]);
getch();
}