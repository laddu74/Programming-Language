/* The program demonstrates passing fo entire array using passing by reference
*/
#include<stdio.h>

double average (int []);		/* Function declaration	*/
void main()
{
	double av;
	int arr[5] = {3, 6, 24, 18, 53};

	av = average(arr);
	printf("The average is %5.2lf.", av);
}

double average(int x[])
{
	int i, sum = 0;

	for(i=0; i<5; i++)
	{
		sum = sum + x[i];
	}
	return(sum/5.0);
}





