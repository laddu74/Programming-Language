/*Q.4 (b) Write a program to read a text file and convert the file contents 	in capital (Upper-case) and write the contents in a output file.

 [Aug./Sep.-2006, Set-3, 4]
Ans. :
Program to copy the contents of one file into another*/
#include<stdio.h>
#include<process.h>

 void main()
  {
	FILE *fp1,*fp2;
	char a;
	clrscr();
	fp1=fopen("d:\\dtp\\test.txt","r");
	if(fp1==NULL)
	 {
	 puts("cannot open this file");
	 exit(1);
	 }
	fp2=fopen("d:\\dtp\\test1.txt","w");
	if(fp2==NULL)
	 {
	 puts("Not able to open this file");
	 fclose(fp1);
	 exit(1);
	 }
	 do
	  {
	  a=fgetc(fp1);
	  a=toupper(a);

	  fputc(a,fp2);
	  }
	  while(a!=EOF);
	  fcloseall();
	  getch();
}