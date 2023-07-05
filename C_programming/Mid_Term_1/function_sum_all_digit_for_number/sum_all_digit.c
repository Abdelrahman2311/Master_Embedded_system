/*
 ============================================================================
 Name        : sum_all_digit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int suming_digit(unsigned int number);

int main(void) {
	unsigned int number ;
	printf("Enter a Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&number);

	printf("summing = %d", suming_digit(number));
}
unsigned int suming_digit (unsigned int number)
{
	int rem=0 ;
	static int suming=0;
	if(number !=0)
	{
		rem = number%10;
		suming +=rem;
		suming_digit(number /= 10);
	}
	return suming;

}
