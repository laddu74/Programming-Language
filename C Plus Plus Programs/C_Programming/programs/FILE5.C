#include <stdio.h>
#include <stdlib.h>



void main()
{
  FILE *fp;
  char str[80], fname[50];
  printf("Enter the file name:");
  gets(fname);

  if ((fp= fopen(fname, "r")) == NULL)
	{
	 printf("cannot open file");
	 exit(1);
  }

	while(!feof(fp))
	{
	fgets(str,79,fp);
	printf("%s",str);
	}

  fclose(fp);
}
