#include <stdio.h>
#include <stdlib.h>



void main()
{
  FILE *fp;
  char str[80], fname[50];
  printf("Enter the file name:");
  gets(fname);

  if ((fp= fopen(fname, "w")) == NULL)
	{
	 printf("cannot open file");
	 exit(1);
  }

	do
	{
	printf("Enter the string (CR to quit) :\n");
	gets(str);
	strcat(str,"\n");           /* add a new line */
	fprintf(fp,"%s",str);
	}while (*str != '\n');

  fclose(fp);
}
