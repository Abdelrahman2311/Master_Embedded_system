/*
 ============================================================================
 Name        : prime_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
unsigned int Prime_Numbers (unsigned int number);
void check_number (unsigned int number1 ,  unsigned int number2);

int main(void) {
	unsigned int number1 , number2;
	printf("Enter two Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&number1 , &number2);

	printf("Prime Numbers is : ");
	check_number(number1 , number2);
}
unsigned int Prime_Numbers (unsigned int number)
{
	int i;
	for(i=2 ; i<=number/2 ; i++)
		{
			if(number % i ==0)
				return 0;
		}
	return 1;
}
void check_number (unsigned int number1 , unsigned int number2)
{
	if(number1 <= number2)
	{
		if(Prime_Numbers(number1)){
			printf("%d  ",number1); }

		check_number(++number1 ,number2 );
	}
}
