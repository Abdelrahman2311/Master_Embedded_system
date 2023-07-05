/*
 ============================================================================
 Name        : count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int Count_binary (unsigned int number);

int main(void) {
	unsigned int number ;
	printf("Enter a Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&number);

	printf("Number of ones in %d is: %d", number, Count_binary(number));
}
unsigned int Count_binary (unsigned int number)
{
	int i , k , count=0;
	printf("Binary number of %d is : ",number);
	for(i=7 ; i>=0 ; i--)
	{
		k = number >> i;
		if(k & 1)
		{
		printf("1" );
		count++;
		}
		else
			printf("0" );
	}
	printf("\n");
	return count;
}
