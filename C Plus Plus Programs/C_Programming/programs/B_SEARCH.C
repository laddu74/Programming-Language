/* 	This program searches a target element within the sorted array using binary search*/
# include <stdio.h>
void main()
{
	int x[9] = 	{10,	20,	30,	40,	50,	60,	70,	80,	90};
	int  target;
	int   low, high, mid;
	printf("Enter any integer number as a target:   ");
	scanf ("%d", &target);
	low = 0;
	high = 8;
	while (low <= high)
		{
				mid = (low+high) / 2;
				if (target < x[mid])
					high = mid - 1;
				else if (target > x[mid])
					low = mid  + 1 ;
				else
				{
					printf("Location of target is %d", mid);
					break;
				}
		}
}

