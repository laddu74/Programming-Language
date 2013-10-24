#include<stdio.h>
main()
{
	int step = 20;
	float fahr , celsius;

	fahr  = 0;

	while ( fahr <= 100 )
	{
	  celsius = (5.0 / 9.0) * (fahr - 32.0);
	  printf("%4.0f\tdegree fahr = %6.1f\tdegree celsius\n" , fahr , celsius);
      fahr = fahr + step;
    }
}
