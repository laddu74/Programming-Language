#define 		MAX_ROWS 3
#define 		MAX_COLS 4
void print_square(int [ ] );					/*function declaration */
void main (void)
{
	int row;
	int num [MAX_ROWS][MAX_COLS] = 
													{
																{	0,	1,	2,	3},
																{	4,	5,	6,	7},
																{	8,	9,	10,	 11} 
														};
	for(row=0; row<MAX_ROWS; row++)
			print_square(num[row]);
}
void print_square(int x[ ])
{
	int col;
	for (col = 0; col<MAX_COLS; col++)
		printf ("%d\t", x[col] * x[col]);
		printf("\n");
}

