#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count[26];

void main(int argc, char *argv[])
{
  FILE *fp;
  char ch;
  int i;
  /* see if file name is specified */
  if (argc!=2) {
    printf("File name missing");
    exit(1);
  }

  if ((fp= fopen(argv[1], "r")) == NULL) {
     printf("cannot open file");
     exit(1);
  }

  while ((ch=fgetc(fp)) !=EOF) {
    ch = toupper(ch);
    if (ch>='A' && ch<='Z') count[ch-'A']++;
  }

  for (i=0; i<26; i++)
	{ printf("%c occurred %d times\t", i+'A', count[i]);
	  if((i+1)%3==0)
	  {
	  printf("\n");      /* Put enter after display of occurrence of three alphabets */
	  }
	}
  fclose(fp);
}
