/*
 ============================================================================
 Name        : sum_numbers_from_1_to_100(without_loop).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int sum_numbers (unsigned int num1 , unsigned int num2);

int main(void) {
	unsigned int num1 , num2 ;
	printf("Enter two Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&num1 , &num2);

	printf("Sum of numbers between %d to %d = %d", num1 , num2 ,sum_numbers(num1 , num2));
}

unsigned int sum_numbers (unsigned int num1 , unsigned int num2)
{
	static int sum = 0;
	if(num1 <= num2)
	{
		sum += num1;
		sum_numbers(++num1 , num2);
	}
	return sum;
}
