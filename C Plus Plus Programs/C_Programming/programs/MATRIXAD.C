/* The program computes the sum of two matrices */
#include<stdio.h>

void main()
	{
	int a[10][10],b[10][10],sum[10][10]={0};
	int i,j,row1,col1,row2,col2;
	clrscr();
	printf("Enter the rows and columns of matrix1 : ");
	scanf("%d %d", &row1, &col1);
	printf("Enter the rows and columns of matrix2 : ");
	scanf("%d %d", &row2, &col2);
	if(row1 != row2 || col1 != col2)
	{
		printf("\nMatrix addition is not possible.");
	}
	else
	{
		printf("\nEnter the values of first matrix::\n");
		for(i=0;i<row1;i++)
		{
		 for(j=0;j<col1;j++)
			{
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d",&a[i][j]);
			}
		}
		printf("\nEnter the values of second matrix::\n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d",&b[i][j]);
			}
		}

		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
				sum[i][j]=	a[i][j]+ b[i][j];
		}
		printf("\nThe sum is \n");

		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
			printf("\t%d",sum[i][j]);
			}
		printf("\n");
		}
	}
	   printf("\nEnter any key to exit............");
	   getch();
}