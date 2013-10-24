#include <stdio.h>
#include <string.h>

void main()

{
 char s1[80];
 char s2[80];

 printf("Enter the first string :");
 gets(s1);
 printf("Enter the second string :");
 gets(s2);
 strcat(s1,s2);
 puts(s1);
}