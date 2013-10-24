#include <stdio.h>

int main() {
  char *ptr;
  char arrayChars[8] = {'F','r','i','e','n','d','s','\0'};

  ptr = arrayChars;

  printf("The array reads %s.\n", arrayChars);
  printf("Let's change it..... ");

  *ptr = 'f'; /* ptr points to the first element */

  printf(" now it reads %s.\n", arrayChars);
  printf("The 3rd character of the array is %c.\n", 
          *(ptr+=2));
  printf("Let's change it again..... ");

  *(ptr - 1) = ' ';

  printf("Now it reads %s.\n", arrayChars);
  return 0;
}

