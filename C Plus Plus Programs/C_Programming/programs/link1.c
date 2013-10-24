#include <stdio.h>
struct list 
{ 	int   value;
	struct list *next;
};

void main()
{	struct list n1, n2, n3, n4;
	struct list *list_pointer = &n1;

	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = &n4;
	n4.value = 400;
	n4.next = NULL;
	while( list_pointer != NULL )  
	{
			printf("%d\n", list_pointer->value);
			list_pointer = list_pointer->next;
	}
}


