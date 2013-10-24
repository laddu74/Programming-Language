/*	A simple calculator program with functions. This program allows the user to		input two numbers, then passes those two numbers into a sum function, and 	finally prints the returned sum.
*/

#include <stdio.h>

/* Define a function that takes two arguments, both of type int, and  returns an int */
int  sum (int n1, int n2)
    {
        int answer;
        answer = n1 + n2;   		/* Put the sum of the two numbers into answer */
     		return(answer);						/* Exit function and return answer */
    }
    
void  main (void)
    {
      	int number1, number2, total;
		printf ("What is the first number? ");
		scanf ("%d", &number1);
		printf ("What is the second number? ");
		scanf ("%d", &number2);
			total = sum (number1, number2);   /* 	Get the sum of the two numbers from
																											the return value of sum() */
			printf ("The sum of %d plus %d is %d\n", number1, number2, total);

	}


