/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int factorialNumber (unsigned int number);

int main(void) {
	unsigned int number , factorial;
		printf("Enter positive number: ");
		fflush(stdin);   fflush(stdout);
		scanf("%d",&number);

		factorial= factorialNumber(number);
		printf("factorial of %d is : %d",number , factorial);

}

unsigned int factorialNumber (unsigned int number)
{

	if(number != 1)
	return number * factorialNumber(number-1) ;
}
