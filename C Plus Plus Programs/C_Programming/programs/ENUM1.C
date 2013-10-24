/* Print selected TV channels for dish TV */
#include <stdio.h>
void main (void)
{
	enum TV {	news = 2,	cnbc = 5,	bbc = 7, espn = 11,
	sony = 13, 	star = 15,	ztv = 17,	etv = 21};
	printf("Here are my favorite TV channels : \n");
	printf("NEWS :  \t%d\n", news);
	printf("CNBC :  \t%d\n", cnbc);
	printf("BBC  :    \t%d\n", bbc);
	printf("ESPN  :  \t%d\n", espn);
	printf("SONY :  \t%d\n", sony);
	printf("STAR :  \t%d\n", star);
	printf("ZTV  :  \t%d\n", ztv);
	printf("ETV :  \t%d\n", etv);
}

