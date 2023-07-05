/*
 ============================================================================
 Name        : reverse_digits_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void suming_digit(unsigned int number);

int main(void) {
	unsigned int number ;
	printf("Enter a Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&number);

	suming_digit(number);
}
void suming_digit (unsigned int number)
{
	int rem=0 ;
	while(number !=0)
	{
		rem = number%10;
		number /= 10 ;
		printf("%d",rem);
	}
}
