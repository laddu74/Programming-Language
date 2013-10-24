/*strcpy: copy t to s; pointer version */
#include<stdio.h>
void main()
{
char arr[] = {'A','B','C','D'};
char arr1[10];
char *s, *t;

s = arr;
t = arr1;
while ((*t = *s) != '\0')
{
	s++;
	t++;
}
printf("%s",arr1);
}