#include <stdio.h>
#include <string.h>

void main()

{
 char s1[80];
 char s2[80];
 unsigned int len;

 printf("Enter the first string :");
 gets(s1);
 printf("Enter the second string :");
 gets(s2);

 /* compute how many charaters will actually fit */
len = 79- strlen(s1);
strncat(s1,s2,len);
puts(s1);
}