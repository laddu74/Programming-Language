/*The program reads temperature in fahrenheit, converts to celsius, and maintains the equivalent values in variable of structures type. */
#include <stdio.h>
void main()
{	struct trecd {
			float ftemp;
			float ctemp;
	} temp;
		double f_to_c(double f);
		char c;

		printf("Enter temperature in degrees F : ");
		scanf("%f", &temp.ftemp);
		temp.ctemp = f_to_c(temp.ftemp);
		printf("Temp in degrees F = %3.lf\n", temp.ftemp);
		printf("Temp in degrees C = %3.lf\n", temp.ctemp);
}

/* This routine converts degrees F to degrees C */
double f_to_c (double f)
{
	return ((f - 32.0) * 5.0/9.0);
}

