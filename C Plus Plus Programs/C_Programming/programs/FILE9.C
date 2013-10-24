#include <stdio.h>
#include <stdlib.h>

struct student
{
char name[50];
int rollno;
int marks;
} s1;


void main(int argc, char *argv[])
{
  FILE *fp;
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
/* Enter the record of three students */
	for(i=0;i<3;i++)
	{
	printf("Enter student record[%d] : Name  Age Marks (CR to quit) :\n", i);
	scanf("%s %d %d", &s1.name, &s1.rollno, &s1.marks);
	fprintf(fp,"%s %d %d", s1.name, s1.rollno, s1.marks);
	}
	/* Now read and display file */
	rewind(fp); 		/* 	reset the file pointer to
							start of the file		*/
	while(!feof(fp))
	{
	fscanf(fp,"%s %d %d", &s1.name, &s1.rollno, &s1.marks);
	printf("%s %d %d\n", s1.name, s1.rollno, s1.marks);
	}

  fclose(fp);
}







