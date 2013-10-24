#include <stdio.h>
#include <stdlib.h>



void main()
{
  FILE *fp;
  char ch, fname[50];
  printf("Enter the file name:");
  gets(fname);

  if ((fp= fopen(fname, "r")) == NULL)
	{
	 printf("cannot open file");
	 exit(1);
  }

	do
	{
	ch = getc(fp);
	putchar(ch);

	}while (ch != EOF);

  fclose(fp);
}
