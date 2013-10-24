/*  The program demonstrates % operation
	Dividing m mangoes for n kids without a knife.
*/


#include <stdio.h>
void main () {

	int kids, mangoes, rounds =0;


	printf("Kids?: ");
	scanf("%d", &kids); 
	printf("Mangoes?: ");
	scanf("%d", &mangoes);

	
	do {
		mangoes -= kids;
		rounds++;
		printf("%d mangoes left after round %d\n", mangoes, rounds);
	} while (mangoes >= kids) ;
	printf ("Each kid got %d mangoes. %d mangoes left.\n", rounds, mangoes);
}
