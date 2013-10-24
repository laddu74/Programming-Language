#include <stdio.h>
#include <string.h>   /* required for strlen and strcpy */

int main() {
  char array1[50];
  char array2[50] = "Previous string!";
  int size;

  printf("Enter a string less than 50 characters: \n");
  gets(array1);

  size = strlen(array1);  /* work out the length */

  printf("\nYour string is %d byt%s long...\n", 
          size, (size==1 ? "e" : "es"));
  printf("   ... and contains %d characters\n\n", size);

  printf("Before copying, array2[] contains : %s\n", array2);

  strcpy(array2, array1);

  printf("Now array2[] contains : ");
  puts(array2);
  printf("\n");
  return 0;
}
