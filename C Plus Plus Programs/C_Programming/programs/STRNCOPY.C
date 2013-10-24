#include <stdio.h>
#include <string.h>

void main()
{
	char src_str[30] = "Hello students";
	char dest_str[30];
	clrscr();
	printf("src_str: %s\n", src_str);
	strncpy(dest_str, src_str,5);
	printf("dest_str: %s\n", dest_str);

	strncpy(dest_str, "Copy first 13 charaters",13);
	printf("dest_str: %s\n", dest_str);

}
/* strncpy copies up to specified characters from src into dest, truncating or
null-padding dest. The target string, dest, might not be null-terminated if the length of src
is maxlen or more.  */


