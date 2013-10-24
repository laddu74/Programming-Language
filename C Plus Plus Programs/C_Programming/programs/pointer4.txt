#include <stdio.h>

main()
{
    int *p , num;

    p = &num;

    *p = 100;

    printf("%d\n" , num);
    (*p)++;
    printf("%d\n" , num);
    (*p)--;
    printf("%d\n" , num);

}


