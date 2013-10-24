#include <stdio.h>
#include <stdlib.h>


void main()
{
  FILE *fp;
  char ch, fname[50];
  int i;
  printf("Enter the file name:");
  gets(fname);

  if ((fp= fopen(fname, "w")) == NULL)
	{
	 printf("cannot open file");
	 exit(1);
  }

	do
	{
	ch = getchar();
	 putc(ch, fp);
	}while (ch != '$');

  fclose(fp);
}
