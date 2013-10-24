#include <stdio.h>
#include <string.h>

void main()
{
	char input_str[10] = "Hello";
	char output_str[10];

	printf("input_str: %s\n", input_str);
	strcpy(output_str, input_str);
	printf("output_str: %s\n", output_str);

	strcpy(output_str, "students");
	printf("output_str: %s\n", output_str);

}


