/*
 ============================================================================
 Name        : Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int PrimeNumbers (unsigned int num1 ,unsigned int num2);

int main(void) {
	unsigned int num1 , num2 , i;

	printf("please Enter two numbers (intervals): ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&num1 , &num2);

	printf("the prime numbers between %d and %d is: ",num1 ,num2);
	for(i=num1 ; num1<=num2 ; num1++)
	{
		if(PrimeNumbers(num1 , num2))
			printf("%d  ",num1);
		else{}

	}
}

unsigned int PrimeNumbers (unsigned int num1 ,unsigned int num2)
{
	unsigned int i;

	for(i=2 ; i<=num1/2 ; i++)
	{
		if(num1 % i ==0)
		{
			return 0;
		}
	}
	return 1;
}
