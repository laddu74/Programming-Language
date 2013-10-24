/*Q.4 (b) Write a C program to read last n chatacters of the file using appropriate file function [Sep-2006, Set-3-4]
Ans. :
Program to read last n characters from the file */
#include<stdio.h>

void main()
  {
	FILE *fp;
	char a;
	int n;
	long len;
	clrscr();
	printf("Enter the value of n : ");
	scanf("%d",&n);
	fp=fopen("d:\\dtp\\test.txt","r");
	if(fp==NULL)
	 {
	 puts("cannot open this file");
	 exit(1);
	 }
	 fseek(fp,0,SEEK_END); /* Move the file pointer to end of file */
	 len = ftell(fp);      /* Read the length of the file */
	 fseek(fp,(len-n),SEEK_SET);  /* Move the file pointer at the beginning of last n characters */
	  do
	  {
	  a=fgetc(fp);
	  putchar(a);
	  }
	  while(a!=EOF);
	  fclose(fp);
	  getch();
}