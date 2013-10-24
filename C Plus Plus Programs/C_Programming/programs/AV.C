#define  MAX_ROWS 3
#define  MAX_COLS  4
double average(int [] [MAX_COLS]);				/* function declaration */
void main (void)
{
	double avg;
	int num [MAX_ROWS]  [MAX_COLS] =	{
																											{	0,	1,	2,	3},
																											{	4,	5,	6,	7},
																											{	8,	9,	10,	11}
																										};
	avg = average (num);
	printf ("Average is %6.2lf. ", avg);
}
double average (int x[ ] [MAX_COLS])
{
	int i, j;
	double sum = 0;
	for (i = 0; i < MAX_ROWS; i++)
				for (j = 0; j<MAX_COLS; j++)
			sum += x[i] [j];
	return (sum/(MAX_ROWS * MAX_COLS));
}

