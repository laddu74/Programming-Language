#include <stdio.h>
#include <string.h> /* We need the system-provided strcpy() */
void main()
{
struct date /* declare the shape of date */
{
int day;
int year;
char month_name[10];
};
struct date d; /* create a variable d of type date */
d.day= 25;
strcpy(d.month_name,"January");
d.year= 2006; /* suppose positive is A.D. */
printf("Day= %d Month= %s Year= %d\n", d.day,d.month_name,d.year);
}

