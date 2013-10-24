#include<stdio.h>
void main(int argc , char * argv[])
{
	int i;
	if(argc<2)
	{  	printf("you have forgot to type your name.");
		exit(1);
	}
	printf("Hello");
	for(i=1;i<argc;i++)
		printf("\t%s",argv[i]);

}