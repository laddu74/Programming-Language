/*Q.4 (b) Write a program to copy the contents of one file into another. [June-2005, Set-4, Unit-5, Q.No.-2]
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
	  fputc(a,fp2);
	  }
	  while(a!=EOF);
	  fcloseall();
	  getch();
}