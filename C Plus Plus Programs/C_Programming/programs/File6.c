
#include <stdio.h>
#include <stdlib.h>


void main()
{
  FILE *fp;
  char str[80], fname[50];
  printf("Enter the file name:");
  gets(fname);

  if ((fp= fopen(fname, "w+")) == NULL)
	{
	 printf("cannot open file");
	 exit(1);
	}

	do
	{
	printf("Enter the string (CR to quit) :\n");
	gets(str);
	strcat(str,"\n");           /* add a new line */
	fputs(str, fp);
	}while (*str != '\n');
	/* Now read and display file */
	rewind(fp); 		/* 	reset the file pointer to
							start of the file		*/
	while(!feof(fp))
	{
	fgets(str,79,fp);
	printf("%s",str);
	}

  fclose(fp);
}



