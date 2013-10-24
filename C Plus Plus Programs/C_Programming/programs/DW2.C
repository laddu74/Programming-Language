#include <stdio.h>

main()
{
  int a,b;
  char ch;

  printf("Do you want to: \n");
  printf("Add, Subtract, Multiply, or Divide?\n");

  /* force user to enter valid response */
  do {
	   printf("Enter first letter: ");
	   flushall(); /* flushall clears all buffers associated
					  with open input streams i.e. keyboard buffer */
	   ch=getchar();
	   printf("\n");
	 } while (ch!='A' && ch!='S' && ch!='M' && ch!='D');
	 printf("Enter first number : ");
	 scanf("%d", &a);
	 printf("Enter second number: ");
     scanf("%d", &b);

  if (ch=='A') printf("Answer is %d.", a+b);
  else if (ch=='S') printf("Answer is %d.", a-b);
  else if (ch=='M') printf("Answer is %d.", a*b);
  else if ((ch=='D') && b!=0) printf("Answer is %d.", a/b);
}
