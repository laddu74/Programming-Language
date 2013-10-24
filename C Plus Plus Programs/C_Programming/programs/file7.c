#include <stdio.h>
#include <stdlib.h>

struct stud
{
char name[50];
int rollno;
int marks;
} s1;


void main(int argc, char *argv[])
{
  FILE *fp;
  char str[80];
  int i;
  /* see if file name is specified */
  if (argc!=2) {
    printf("File name missing");
    exit(1);
  }

  if ((fp= fopen(argv[1], "w+")) == NULL)
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







