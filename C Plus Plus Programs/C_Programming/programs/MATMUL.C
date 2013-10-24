/* The program computes the product of two matrices */
#include<stdio.h>

void main()
	{
	int a[10][10],b[10][10],product[10][10]={0};
	int i,j,k,row1,col1,row2,col2;
	clrscr();
	printf("Enter the rows and columns of matrix1 : ");
	scanf("%d %d", &row1, &col1);
	printf("Enter the rows and columns of matrix2 : ");
	scanf("%d %d", &row2, &col2);
	if(row1 != col2)
	{
		printf("\nMatrix multiplication is not possible.");
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
			for(j=0;j<col2;j++)
			{
				for(k=0;k<row2;k++)
				product[i][j]=	product[i][j]+ a[i][k]*b[k][j];
			}

		}
		printf("\nThe product is \n");

		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
			printf("\t%d",product[i][j]);
			}
		printf("\n");
		}
	}
	   printf("\nEnter any key to exit............");
	   getch();
}