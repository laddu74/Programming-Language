/*Q.4(b) Write a 'C' program using pointers to determine the length of a character string.[June-2005, Set-1, Unit-3, Q.No.15]
Ans. :
Program to find the length of the string using pointers.*/
#include<stdio.h>
#include<conio.h>
int string_ln(char*);
void main()
{
  char str[20];
  int l;
  clrscr();
  printf("Enter any string:\n");
  gets(str);
  l=string_ln(str);
  printf("The length of the given string %s is : %d",str,l);
  getch();
}
int string_ln(char*p)  /* p=&str[0] */
{
  int count=0;
  while(*p!='\0')
  {
	count++;
	p++;
  }
  return count;
}